#include "main.h"
#include <string.h>
/**
 * puts2 - print even char.
 * @str: string to print char from it.
*/
void puts2(char *str)
{
	int n = strlen(str);
	int i = 0;

	for (i = 0; i < n; i++)
	{
		if (!(i % 2))
			_putchar(str[i]);
	}
	_putchar('\n');
}
