//买股票
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define BUFFER_SIZE 7
#define POSS_SIZE 21
int main()
{
#if 0
    int array[BUFFER_SIZE] = {7, 1, 4, 2, 5, 6, 3};
   
    int count = 0;
    
    int buy;
    int sell;
    int * possible =malloc(sizeof(int) * POSS_SIZE);
    memset (possible, 0, sizeof(int) *POSS_SIZE);
    for(int idx = 0; idx < BUFFER_SIZE-1; idx++)
    {
        for(int jdx =idx + 1; jdx < BUFFER_SIZE; jdx++)
        {
            possible[count] = array[jdx] - array[idx];
            count++;
        }
    }
    int max ;
    //for(int idx = 0; idx < POSS_SIZE; idx++)
    // {
    //     printf("possible[%d] = %d", idx, possible[idx]);
    // }
    for(int idx = 1; idx < POSS_SIZE; idx++)
    {
        if (possible[idx] > max)
        {
            max = possible[idx];
        }

    }
    printf("%d\n",max);
#endif 
    int array[BUFFER_SIZE] = {7, 1, 4, 2, 5, 6, 3};
    int set[BUFFER_SIZE][BUFFER_SIZE] = {0};
    int max = 0;
    int buy;
    int sell;
    for(int idx = 0; idx < BUFFER_SIZE-1; idx++)
    {
        for(int jdx =idx + 1; jdx < BUFFER_SIZE; jdx++)
        {
            set[idx][jdx] = array[jdx] - array[idx];
        }
    }
    for(int idx = 0; idx < BUFFER_SIZE-1; idx++)
    {
        for(int jdx =idx + 1; jdx < BUFFER_SIZE; jdx++)
        {
           if (set[idx][jdx] > max)
           {
                max = set[idx][jdx];
                buy = idx + 1;
                sell = jdx + 1;
            }
        }
    }
     printf("在第%d天买入,在第%d天卖出,获利%d元\n", buy, sell, max);
}