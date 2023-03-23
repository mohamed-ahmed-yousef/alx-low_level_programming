#include "main.h"
/**
 * main - Dealing with heading file in c
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char chr[]="_putchar";
	int i=0;

	for (int i=0; i < 8; i++)
	{
		_putchar(chr[i]);
	}
	_putchar('\n');
	return (0);
}
