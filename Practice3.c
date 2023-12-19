#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#define BUFFER_SIZE 10
#define RAND_NUM 9
int main()
{   

#if 0
    srand(time(NULL));
    int num;
    int randnum[BUFFER_SIZE] = {4, 5, 2, 2, 2, 5, 5, 5, 6, 6};
    // memset(randnum, 0, sizeof(int) * BUFFER_SIZE);
#if 0
    for(int idx = 0; idx < 11; idx++)
    {
        randnum[idx] = rand()%RAND_NUM+1;
        printf("%d\n",randnum[idx]);
    }
#endif

    for (int idx = 0; idx < BUFFER_SIZE; idx++)
    {
        for(int jdx = idx+1; jdx < BUFFER_SIZE; jdx++)
        {
            if(randnum[idx] >= randnum[jdx])
            {
                num = randnum[idx];
                randnum[idx] = randnum[jdx];
                randnum[jdx] = num;

            }   
            
        }
        
    }
    printf("排序后的数组为：\n") ;
    for(int idx = 0; idx < BUFFER_SIZE; idx++)
    {
        printf("%d\n",randnum[idx]);
    }
#if 0
    printf("去除相同的数后的数组为：\n");
    // printf("%d\n", randnum[0]);
    for(int idx = 1; idx < BUFFER_SIZE; idx++)
    {
        if ((idx < BUFFER_SIZE - 1) && (randnum[idx] < randnum[idx + 1] ))
        {
            printf("%d\t", randnum[idx]);
        }
        else if (idx == BUFFER_SIZE - 1)
        {
            // if (randnum[idx] != randnum[idx - 1])
            // {
                printf("%d\t",randnum[idx]);
            // }
        }
    }
    printf("\n");  
#endif

#endif       
    
#if 1
    int array[RAND_NUM] = { 1, 1, 1, 2, 3, 3, 3, 4, 5};     /* [1, 2, 3, 4]*/
    int pos = 1;
    for (int idx = 1; idx < RAND_NUM -1; idx++)
    {
        if (array[idx - 1] != array[idx])
        {
            array[pos] = array[idx];  
            pos++; 
        }
        
    }  
    for (int idx = 0; idx < pos; idx++)//遍历
    {
        printf("%d\t", array[idx]);
    }
    printf("\n");
#endif   
    return 0;
}