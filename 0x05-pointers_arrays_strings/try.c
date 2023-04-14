#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
int main(void)
{
    char s[] = "---++++ -++ Sui - te -   402 #cisfun :)";
    int count = 0;
    int n = strlen(s);
    int i = 0;
    int digit = 0;
    int store = 0;
    
    for (i = 0 ; i < n; i++)
    {
        if (s[i] == '-')
        {
            count++;
        }
    }
    for (i = 0 ; i < n; i++)
    {
        if ( s[i] >= '0' && s[i] <= '9')
        {
            store = s[i]-'0';
            digit = store+10*digit;
        }
    }
    if (count % 2 != 0)
    digit = -digit;
    printf("%d\n", digit);
}
