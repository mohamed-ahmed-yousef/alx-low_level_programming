#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stddef.h>

int main()
{
    char *str="Hello";
    int i =0;
    char c = 'o';
    int curr=0;
    

    for (i = 0; i < strlen(str); i++)
    {
        curr=*str++;
        if (curr == c)
        {
            printf("%d", *(str -1) + '0');
        }
    }
    
}