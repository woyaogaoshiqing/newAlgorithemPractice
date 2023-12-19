#include"Practice11.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

enum STATUS_CODE
{
    ON_SUCCESS,
    NULL_PTR,
    MALLOC_ERROR,
    INVALID_ACCESS,
};
#define DEFAULT_SIZE 10

int Practice11ArrayInto(Practice11Array *pArray, int capacity)
{
    if (pArray == NULL)
    {
        return NULL_PTR;
    }
    /*避免传入非法值*/
    if (capacity < 0)
    {
        capacity=DEFAULT_SIZE;
    }
    /*分配动态数组*/
    pArray->data = (ELEMEMT *)malloc(sizeof(ELEMEMT) * capacity);
    if (pArray->data == NULL)
    {
        return MALLOC_ERROR;
    }
    memset(pArray->data, 0, sizeof(ELEMEMT) *capacity);
    pArray->len = 0;
    pArray->capacity = capacity;
}

int Practice11ArrayInserData(Practice11Array * pArray, ELEMEMT val)
{

}

/* 动态数组扩容 */
static int expandDynamicCapacity(Practice11Array *pArray)
{
    
    
    int needExpandCapacity = pArray->capacity + (pArray->capacity >> 1);

    /* 备份指针 */
    ELEMEMT * tmpPtr = pArray->data;
    pArray->data = (ELEMEMT *)malloc(sizeof(ELEMEMT) * needExpandCapacity);
    if (pArray->data == NULL)
    {
        return MALLOC_ERROR;
    }

    /* 把之前的数据全部拷贝过来 */
    for (int idx = 0; idx < pArray->len; idx++)
    {
        pArray->data[idx] = tmpPtr[idx];
    }

    /* 释放以前的内存 避免内存泄漏 */
    if (tmpPtr != NULL)
    {
        free(tmpPtr);
        tmpPtr = NULL;
    }

    /* 更新动态数组的容量 */
    pArray->capacity = needExpandCapacity;

    
}


int Practice11ArrayAppointPosInserData(Practice11Array *pArray, int pos, ELEMEMT val)
{
    /*判断指针为空*/
    if (pArray == NULL)
    {
        return NULL_PTR;
    }
    /*判断位置的合法性*/
    if (pos < 0 || pos > pArray->len)
    {
        return INVALID_ACCESS;
    }
    /*扩容*/
    if ((pArray->len + (pArray->len >> 1)) >= pArray->capacity)
    {
        expandDynamicCapacity(pArray);
    }
    /*数据后移，插入pos位置的数据*/
    for(int idx = pArray->len; idx > pos; idx--)
    {
        pArray->data[idx] = pArray->data[idx-1];
    }
    /*插入数据*/
    pArray->data[pos] = val;
    pArray->len = pArray->len + 1;
    return ON_SUCCESS;

}
int Practice11ArrayModifyAppiontPosInserData(Practice11Array * pArray, int pos, ELEMEMT val)
{
    /*判断指针为空*/
    if (pArray == NULL)
    {
        return NULL_PTR;    
    }
    if(pos < 0 || pArray->capacity < pos)
    {
        return INVALID_ACCESS;
    }
    pArray->data[pos] = val;
    return ON_SUCCESS;
}

static int shrinkDynamicCapacity(Practice11Array *pArray)
{
    int needShrinkCapacity = pArray->capacity - (pArray->capacity >> 1);

    ELEMEMT * tmpPtr = pArray->data;
    pArray->data = (ELEMEMT *)malloc(sizeof(ELEMEMT) * needShrinkCapacity);
    if (pArray->data == NULL)
    {
        return MALLOC_ERROR;
    }

    /* 拷贝之前的数据到新的空间 */
    for (int idx = 0; idx < pArray->len; idx++)
    {
        pArray->data[idx] = tmpPtr[idx];
    }
    
    /* 释放内存空间 避免内存泄漏 */
    if (tmpPtr != NULL)
    {
        free(tmpPtr);
        tmpPtr = NULL;
    }
    /* 更新容量 */
    pArray->capacity = needShrinkCapacity;
    return ON_SUCCESS;
}
int Practice11ArrayDeleteData(Practice11Array *pArray, ELEMEMT val)
{

}

int Practice11ArrayDeleteAppiontData(Practice11Array *pArray, int pos)
{
    if (pArray == NULL)
    {
        return NULL_PTR;
    }
    if (pos < 0 || pos > pArray->capacity)
    {
        return INVALID_ACCESS;
    }
    if (pArray->len < pArray->capacity >> 1)
    {
        shrinkDynamicCapacity(pArray);
    }  
    for(int idx = pos; idx < pArray->len; idx++)
    {
        pArray->data[idx] = pArray->data[idx + 1];
    } 
    pArray->len = pArray->len -1;
    return ON_SUCCESS;
}

int Practice11ArrayDeleAppiontDete(Practice11Array *pArray,ELEMEMT val)
{
    if (pArray ==  NULL)
    {
        return NULL_PTR;
    }
    
    for (int idx = pArray->len - 1; idx >= 0; idx--)
    {
        if (val == pArray->data[idx])
        {
            Practice11ArrayDeleteAppiontData(pArray, idx);
        }
    }
    return ON_SUCCESS;
}

int Practice11ArrayDestroy(Practice11Array *pArray)
{
    if ( pArray == NULL)
    {
        return NULL_PTR;
    }
    if (pArray->data != NULL)
    {
        free(pArray);
        pArray->data = NULL;
    }
    return ON_SUCCESS;
}

int Practice11ArrayGetSize(Practice11Array *pArray, int *pSize)
{
    if (pArray == NULL)
    {
        return NULL_PTR;
    }
    if (pSize != NULL)
    {
        *pSize = pArray->len;
    }
    return ON_SUCCESS;
}
int Practice11ArrayGetCapacity(Practice11Array *pArray, int *pCapacity)
{
    if (pArray == NULL)
    {
        return NULL_PTR;
    }
    if (pCapacity != NULL)
    {
        *pCapacity = pArray->capacity;
    }
    return ON_SUCCESS;
}
int Practice11ArrayGetData(Practice11Array *pArray, int pos, ELEMEMT *pVal)
{
    if (pArray == NULL)
    {
        return NULL_PTR;
    }
    if (pos < 0 || pos > pArray->len)
    {
        return INVALID_ACCESS;
    }
    if (pVal)
    {
        *pVal = pArray->data[pos];
    }
    return ON_SUCCESS;
}
