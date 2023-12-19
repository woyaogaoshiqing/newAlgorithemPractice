#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define REANGE_NUM 22




int main()
{
    int randomNumbers[5];
    int randnum1;
    int randnum2;
    
    
    srand(time(NULL));
    
    
    for (int idx = 0; idx < 5; idx++) 
    {
        randomNumbers[idx] = rand()%REANGE_NUM+1;
    }
     
     
     
    
    
    
    printf("随机数数组：\n");
    for (int idx = 0; idx < 5; idx++) 
    {
        printf("%d\n", randomNumbers[idx]);
    }
    
    
    for ( int idx = 0; idx < 5; idx++)
    {
        for ( int jdx = idx+1; jdx < 5; jdx++)
        {
            if (randomNumbers[idx] + randomNumbers[jdx] == 22)
            {
               randnum1 = idx;
               randnum2 = jdx;
               break;
            }
            


        }
        
    }
    if (randnum1 == randnum2)
    {
        printf("没有两个数使得相加等于22");
    }
    else
    {   
        int randnum3 =randnum1+1;
        int randnum4 =randnum2+1;
        printf("相加等于22的两个数是第 %d个数 和 第 %d个数。\n",randnum3 ,randnum4);
    }

    return 0;

}