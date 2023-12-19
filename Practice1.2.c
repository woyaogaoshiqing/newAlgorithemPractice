#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#define RANDOM_NUM 22
#define BUFFER_SIZE 5
int main()
{
    int randomnum[BUFFER_SIZE];
    memset(randomnum, 0, sizeof(int)*BUFFER_SIZE);
    int randomSc1 =100;
    int randomSc2 =100;


         srand(time(NULL));

    while( randomSc1 == 100 || randomSc2 == 100 )
    {
        for(int idx = 0 ; idx < 5 ; idx++)
        {
            int  ran;
            do
            {
                ran = rand()%RANDOM_NUM+1;
            } 
            while (ran == 11);
            randomnum[idx] = ran;
        }



        for(int idx = 0; idx < 4 ; idx++)
        {
            for (int jdx = 0; jdx < 5 ;jdx++)
            {
                if ( randomnum[idx] + randomnum[jdx] == 22)
                {
                   randomSc1 = idx;
                   randomSc2 = jdx;
                   break;
                }
                
            }
            
        }
        if (randomSc1 != 100 && randomSc2 != 100)
        {
            break;
        }
    }
    
    printf("随机数数组\n");
     for (int idx = 0; idx < 5; idx++) 
    {
        printf("%d\n", randomnum[idx]);
    }
    printf("相加等于22的两个数是第 %d个数 和 第 %d个数。\n", randomSc1, randomSc2);
    
}