#include<stdio.h>
#include<string.h>
#define BUFFER_SIZE 5
char *reverseWords(char *s)
{
    int len = strlen(s);
    char *ans = (char *)malloc(sizeof(char) * (len + 1));
    int start = len - 1; 
    int end = len - 1;   
    int current = 0;     
    int index = 0;       
    while (start >= 0)
    {
        if (s[start] == ' ')
        {
            start--; 
        }
        else 
        {
            end = start; 
            while (start >= 0 && s[start] != ' ')
            {
                start--; 
            }
            current = start + 1;   
            while (current <= end) 
            {
               
                ans[index++] = s[current++];
            }
            
            ans[index++] = ' '; 
        }
    }
    
    if (index >= 1)
        ans[index - 1] = '\0';
    else
        ans = "";
    return ans;
}


int main()
{
    char *array[BUFFER_SIZE] = {0};
    memset(array, 0, sizeof(array));
    array[0] = "hello";
    array[1] = "world";
    array[2] = "nihao";
    array[3] = "zhangsan";
    array[4] = "chain";
    printf("array[0]:%s\n",*(array + 0));
    printf("array[0]:%c\n",array[0][1]);
    printf("array[0]:%c\n",*(*(array + 0) + 1));
    printf("array[0]:%p\n",array[0]);
    return 0;
}