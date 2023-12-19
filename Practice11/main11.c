#include"Practice11.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define BUFFER_SIZE 20
#define DEFAULT_NUM 5


int main()
{
    Practice11Array array;
    Practice11ArrayInto(&array,BUFFER_SIZE); 

    int size = -1;
    Practice11ArrayGetSize(&array, &size);
    printf("size:%d\n", size);
    return 0;
}