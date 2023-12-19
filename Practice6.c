#include<stdio.h>
#include<string.h>
#include<stdlib.h>



int main()
{
#if 0
    char ch = 'A';
    int ascii = (int)ch;
    printf("ascii:%d\n",ascii);
    char str[] = "Hello";
    char *ptr = str;

    while (*ptr != '\0') {
    printf("%c ", *ptr);
    ptr++;
    }
#endif    

    char *str = "TenEt";
    int len = strlen(str);
    int ascii;
    int count = 0;
    int * trasnum = (int*)malloc(sizeof(int) * len);
    memset (trasnum, 0, sizeof(int) * len);
    for(int idx = 0; idx < len; idx++)
    {
        ascii =(int)str[idx];
        
        if (65 <= ascii && ascii <=123) 
        {
            if(65 <= ascii && ascii <= 96)
            {
                ascii = ascii + 32;
            }
            else
            {
                ascii = ascii;
            }
            trasnum[idx] = ascii; 
            count++; 
        }
        
    }
    
    for(int idx = 0; idx < count; idx++)
    {
        printf("%d\n",trasnum[idx]);  
    }
    int * firstptr = &trasnum[0];
    int * lastptr = &trasnum[count-1];
    while (firstptr < lastptr)
    {
        if (*firstptr != *lastptr)
        {
            printf("这不是回文");
            return 0;
        }
        firstptr++;
        lastptr--;
        
    }
    printf("这是回文数");
    return 0;
   
    



    
}
 