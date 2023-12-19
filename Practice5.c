//合并数组
#include<stdio.h>
#include<stdlib.h>

int SortingFunction(int num1[], int size1, int num2[], int size2)
{
    int * Summary = (int *)malloc((size1 + size2) * sizeof(int));
    int idx = 0; 
    int jdx = 0;
    int kdx = 0;
    while (idx < size1 && jdx < size2)
    {
        if (num1[idx] >= num2[jdx])
        {
            Summary[kdx++] = num2[jdx++];
        }
        else
        {
            Summary[kdx++] = num1[idx++];
        }
    }
    if (idx < size1)
    {
       Summary[kdx++] = num1[idx++];
    }
    if (jdx < size2)
    {
       Summary[kdx++] = num2[jdx++];
    }
    return Summary;
}