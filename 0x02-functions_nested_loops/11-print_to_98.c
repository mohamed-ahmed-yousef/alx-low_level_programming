#include "main.h"
#include <stdio.h>
/**
* print_to_98 - print last digit of the number.
*@n: is the first Number
* Return: return the sum of two number
*/
void print_to_98(int n)
{
	int x = n;

	if (n <= 98)
	{
		while (n <= 98)
		{
			if (n != x)
			{
				_putchar(',');
				_putchar(' ');
			}
			printf("%d", n);
			n++;
		}
	} else
	{
		while (n >= 98)
		{
			if (n != x)
			{
				_putchar(',');
				_putchar(' ');
			}
			printf("%d", n);
			n--;
		}
	}
	return;
}
