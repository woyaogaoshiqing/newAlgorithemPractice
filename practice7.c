#include<stdio.h>
#include<string.h>
mergeorderNum(int *num1, int num1Size, int *num2, int num2Size, int *newSize)
{
    int arrayLen = num1Size + num2Size;
    int * newArray = malloc(sizeof(int) * arrayLen);
    if(newArray == NULL)
    {
        return NULL;
    }
    int idx1 = 0;
    int idx2 = 0;
    int pos = 0;
    while(idx1 < num1Size && idx2 < num2Size)
    {
        if(num1[idx1] <= num2[idx2])
        {
            newArray[pos] = num1[idx1++];
        }
        else
        {
            newArray[pos] = num2[idx2++];
        }
        pos++;
    }
    if (idx1 == num1Size)
    {
        
    }
    
    return 0;
}
int main()
{
    int num1[] = {1, 1, 2, 15, 67};
    int num2[] = {1, 2, 2, 7, 19, 156, 231};

    int num1Len = sizeof(num1) / sizeof(num1[0]);
    int num2Len = sizeof(num2) / sizeof(num1[0]);

    int newSize = 0;
    int * newSize = mergeorderNum(num1, num1Len, num2,  num2Len, &newSize);
    

    return 0;
}