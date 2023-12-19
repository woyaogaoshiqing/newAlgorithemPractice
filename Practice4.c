#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define RAND_NUM 9
int main()
{

    int target = 2;
    scanf("%d",&target);
    int size = 0; 

    printf("输入数组大小");
    scanf("%d",&size);
    int *array = (int*)malloc(sizeof(int)*size);
    int pos = 0;
    srand(time(NULL));
    for(int idx = 0; idx < size; idx++ )
    {

    array[idx] = rand() % 10 + 1;
    printf("%d",array[idx]);

    }
    printf("\n");
    return 0;

    for(int idx = 0; idx < size ; idx++ )
    {
        if (array[idx] != target)
        {
        array[pos++] = array[idx];
        printf("%d",array[pos]);
        
        }
    }
    printf("\n");
    return 0;
    }