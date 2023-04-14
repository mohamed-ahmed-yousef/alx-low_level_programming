#include "main.h"

/**
 * base10 - power in 10 base
 * @n: an exponent
 * Return: returns 10 to power exponent
 */
void print_number(int n)
{
	while (n / 10)
	{
		n = n / 10;
		_putchar(n / 10);
	}
	_putchar(n % 10);

}