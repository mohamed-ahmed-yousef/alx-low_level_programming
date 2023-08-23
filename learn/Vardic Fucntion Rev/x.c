#include <stdio.h>
#include <stdarg.h>
#include <string.h>

int max(int arg_num, ...);
int print(char *currChar, ...);
int main(void)
{
    print("f",4.62342);
}
int max(int arg_num, ...)
{
    va_list args;
    va_start(args, arg_num);
    int max = 0;
    for (int i = 0; i < arg_num; i++)
    {
        int x = va_arg(args, int);
        if (i == 0) max = x;
        else if(x > max) max = x;
    }
    return max;
}
int print(char *currChar, ...)
{
    int len = strlen(currChar);
    va_list args;
    va_start(args, currChar);
    for (int i = 0; i < len; i++)
    {
        if (currChar[i] == 'd')
        {
            int x = va_arg(args, int);
            printf("%d\n", x);
        }
        else if(currChar[i] == 'f')
        {
            double x = va_arg(args, double);
            printf("%f\n", x);

        }
    }
    va_end(args);
    return (0);
}
