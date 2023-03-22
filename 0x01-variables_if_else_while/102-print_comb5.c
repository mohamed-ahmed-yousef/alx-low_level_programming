#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	int add = 44;
	int j = 48;
	int k = 48;
	int m = 0;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			for (k = 48; k < 58; k++)
			{
				for (m = 48; m < 58; m++)
				{
					if (i > k || (i == k && j >= m))
					continue;
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(m);
					if (i == 57 && j == 56 && k == 57 && m == 57)
					continue;
					putchar(add);
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0); }

