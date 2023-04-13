#include "main.h"
#include <string.h>
/**
 * print_rev - print string
 * @s: the string to print.
*/
void print_rev(char *s)
{
	int i = 0;
	int n = strlen(s);

	for (i = n - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
