//转置矩阵
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define BUFFER_SIZE 3
int main()
{   
    int array[BUFFER_SIZE][BUFFER_SIZE] = {1,2,3,4,5,6,7,8,9};
    for(int idx = 0; idx < BUFFER_SIZE; idx++)
    {
        for(int jdx = 0; jdx < BUFFER_SIZE; jdx++)
        {
            printf("array[%d][%d]=%d\t", jdx, idx, array[jdx][idx]);
        }
        printf("\n");
    }
    return 0;
}