#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "heelo";
    char *f;

    f = _strchr(s, 'o');

    if (f != NULL)
    {
        printf("%s\n", f);
    }
    return (0);
}