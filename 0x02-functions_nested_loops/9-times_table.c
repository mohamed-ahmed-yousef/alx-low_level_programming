#include "main.h"
/**
* times_table - print last digit of the number.
*
* This print from 00:00 to 23:59
*/
void times_table(void)
{
	int i = 0, j = 0, a = 0, l = 0;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			a = i * j;
			if (a <= 9)
			{
				if (j != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(a + 48);
				if (j != 9)
				_putchar(',');
			}
			if (a > 9)
			{
				l = a % 10;
				a /= 10;
				_putchar(' ');
				_putchar(a + 48);
				_putchar(l + 48);
				if (j != 9)
				_putchar(',');

			}
		}
		_putchar('\n');

	}
}
