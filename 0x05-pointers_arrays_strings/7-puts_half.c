#include "main.h"
#include <string.h>
/**
 * puts_half - print half of string
 * @str: the string to print.
*/
void puts_half(char *str)
{
	int n = strlen(str);
	int x = n / 2;
	int i = 0;

	for (i = x; i < n; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
