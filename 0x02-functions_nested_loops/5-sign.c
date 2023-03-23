#include "main.h"
/**
* print_sign - find if the char is lower or upper.
*
*@c: is an integer value passed from main function.
* Return: Always 0
*
*/
int print_sign(int c)
{
	if (c > 0)
	{
		_putchar('+');
		return 1;
	}
	else if (c < 0) 
	{
		_putchar('-');
		return -1;
	}
	else 
	{
		_putchar('0');
		return 0;
	} }
