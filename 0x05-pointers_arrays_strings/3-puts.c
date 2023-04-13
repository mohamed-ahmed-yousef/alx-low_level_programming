#include "main.h"
#include <string.h>
/**
 * _puts - print string
 * @str: the string to print.
*/
void _puts(char *str)
{
	int i = 0;
	int n = strlen(str);

	for (i = 0; i < n; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
