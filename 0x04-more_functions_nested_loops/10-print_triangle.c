#include <stdio.h>
#include "main.h"
/**
*print_triangle -  print _ number of times.
*
* This function used to print 0-14 ten times
*@n: size of triangle
*/
void print_triangle(int n)
{
	int i = 0, j = 0;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n ; j++)
		{
			if (i + j + 1 >= n)
				_putchar(35);
			else
				_putchar(' ');
		}
		_putchar('\n');

	}
}
