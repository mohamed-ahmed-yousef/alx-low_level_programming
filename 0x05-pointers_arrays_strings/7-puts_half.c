#include "main.h"
#include <string.h>
/**
 * puts_half - print half of string
 * @str: the string to print.
*/
void puts_half(char *str)
{
	int n = strlen(str);
	int i = 0;
	int x;

	if (n % 2 == 0)
		x = n / 2;
	else
		x = n / 2 + 1;


	for (i = x; i < n; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
