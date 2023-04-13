#include "main.h"
#include <stdio.h>
/**
 * print_array - print the element in the array.
 * @a: array of numbers.
 * @n: length of number needed to print.
*/

void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n ; i++)
	{
		printf("%d", a[i]);
		if (i + 1 != n)
		printf(", ");
	}
	_putchar('\n');
	_putchar('\n');
}



