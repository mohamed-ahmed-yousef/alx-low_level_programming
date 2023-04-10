#include "main.h"
/**
 * print_number - like a hello world
 *
 * @n: params an integer
 *
 * No return
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
	{
		print_number(n / 10);
	}
	_putchar(n % 10 + '0');
}
