#include "main.h"
/**
* print_diagonal -  print space  number of times.
*
* This function used to print 0-14 ten times
*@n: number of printing \
*/
void print_diagonal(int n)
{
	int i = 0, j = 0;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
