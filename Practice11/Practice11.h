#ifndef _PRACTICE_11_H_
#define _PRACTICE_11_H_

#define ELEMEMT int
// typedef int ELEMEMT;
typedef struct Practice11Array
{
    ELEMEMT * data;
    int len;
    int capacity;
}Practice11Array;


/*动态数组的初始化*/
int Practice11ArrayInto(Practice11Array *pArray, int capacity);


/*增-动态数组插入元素（默认插到数组末尾）*/
int Practice11ArrayInserData(Practice11Array * pArray, ELEMEMT val);

/*改-动态数组在指定位置修改元素*/
int Practice11ArrayModifyAppiontPosInserData(Practice11Array * pArray, int pos, ELEMEMT val);

/*增-动态数组插入数据，在指定位置插入*/
int Practice11ArrayAppointPosInserData(Practice11Array *pArray, int pos, ELEMEMT val);

/*删-动态数组删除数据（默认删除数组末尾的数据）*/
int Practice11ArrayDeleteData(Practice11Array *pArray, ELEMEMT val);

/*删-动态数组删除指定位置的数据*/
int Practice11ArrayDeleteAppiontData(Practice11Array *pArray, int pos);

/*删-动态数组删除指定元素*/
int Practice11ArrayDeleAppiontDete(Practice11Array *pArray,ELEMEMT val);

/*删-动态数组销毁*/
int Practice11ArrayDestroy(Practice11Array *pArray);

/*查-获取动态数组大小*/
int Practice11ArrayGetSize(Practice11Array *pArray, int *pSize);

/*查-获取动态数组容量*/
int Practice11ArrayGetCapacity(Practice11Array *pArray, int *pCapacity);

/*查-获取动态数组指定元素*/
int Practice11ArrayGetData(Practice11Array *pArray, int pos, ELEMEMT *pVal);

#endif