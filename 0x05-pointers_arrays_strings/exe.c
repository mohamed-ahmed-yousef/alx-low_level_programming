#include <stdio.h>
#include "main.h"

/**
 * main - check the code 
 *
 * Return: Always 0.
 */
int main()
{
    int n;

    n = 402;
    printf("n=%d\n", n);
    reset_to_98(&n);
    printf("n=%d\n", n);
    return (0);
}