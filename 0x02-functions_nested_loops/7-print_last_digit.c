#include "main.h"
/**
* print_last_digit - print last digit of the number.
*
*@c: is an integer value passed from main function.
* Return: Always 0
*
*/
int print_last_digit(int c)
{
	if (c < 0)
	{
		c  %= 10;
		c = -c;
		_putchar('0' + c % 10);
		return (c % 10);
	}
	_putchar('0' + c % 10);
	return (c % 10); }
