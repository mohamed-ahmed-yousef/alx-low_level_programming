#include <stdio.h>
#include "main.h"

/**
* main - prints the largest of 3 integers
* Return: 0
*/

int main(void)
{
        int a, b, c;
        int largest;

        a = 92;
        b = -9808;
        c = 0;

		if (a < 0) a = -a;
		if (b < 0) b = -b;
		if (c < 0) c = -c;

        largest = largest_number(a, b, c);

        printf("%d is the largest number\n", largest);

        return (0);
}
