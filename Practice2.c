#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#define BUFFER_SIZE 6
#define RAND_NUM 50
int main()
{
    srand(time(NULL));
    int temp;
    int randnum[BUFFER_SIZE];
    memset(randnum, 0, sizeof(int)*BUFFER_SIZE);
    for(int idx = 0; idx < 6; idx++)
    {
        randnum[idx] = rand()%RAND_NUM+1;
        printf("%d\n",randnum[idx]);
    }
        for(int idx = 0; idx < 6;idx++)
        {   for(int jdx =0; jdx<6; jdx++)
            {
                if (randnum[jdx] > randnum[jdx+1])
                {
                    temp = randnum[jdx];
                    randnum[jdx] = randnum[jdx+1];
                    randnum[jdx+1] = temp;
                    
                }
                


            }

        }
        printf("排序后的数组为：") ;
        for(int idx = 0; idx < 6; idx++)
        {
            printf("%d\n",randnum[idx]);
        }           





    
    



    return 0;
}