#include "main.h"
/**
* print_most_numbers -  function check upper case for string
*
* print most of digit from 0 -9
*/
void print_most_numbers(void)
{
	int i = 0;

	for (i = 48; i < 58; i++)
	{
		if (i == 50 || i == 52)
		continue;
		_putchar(i);
	}
	_putchar('\n');
}
