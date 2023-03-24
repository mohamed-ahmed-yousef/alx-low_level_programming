#include "main.h"
/**
* jack_bauer - print last digit of the number.
*
* This print from 00:00 to 23:59
*/
void jack_bauer(void)
{
	int i = 0, j = 0, k = 0, l = 0;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = 0; k < 6; k++)
			{
				for (l = 0; l < 10; l++)
				{
					_putchar('0' + i);
					_putchar('0' + j);
					_putchar(':');
					_putchar('0' + k);
					_putchar('0' + l);
					_putchar('\n');
					if (i == 2 && j == 3 && k == 5 && l == 9)
					return;

				}
			}
		}
	}
}
