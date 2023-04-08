#include "main.h"
/**
* print_line -  print _ number of times.
*
* This function used to print 0-14 ten times
*@n: number of printing _
*/
void print_line(int n)
{
	int i = 0;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}

}
