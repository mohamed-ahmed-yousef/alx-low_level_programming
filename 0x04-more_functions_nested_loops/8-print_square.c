#include "main.h"
/**
*print_square -  print _ number of times.
*
* This function used to print 0-14 ten times
*@n: number of printing _
*/
void print_square(int n)
{
	int i = 0, j = 0;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
				_putchar(35);
		_putchar('\n');
		}

	}

}
