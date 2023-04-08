#include "main.h"
/**
* more_numbers -  print number from 0 - 14 using only _putchar and print it 10 time.
*
* This function used to print 0-14 ten times
* Return: Always return 0 or 1
*/
void more_numbers(void)
{
	int i = 0, j = 0;

	for (k = 0; k < 10; k++)
		{
		for (i = 0; i < 15; i++)
		{
			if (i > 9)
			_putchar(1 + '0');
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}
