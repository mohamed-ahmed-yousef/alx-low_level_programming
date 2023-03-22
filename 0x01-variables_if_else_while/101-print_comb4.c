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

	for (i = 48; i < 57; i++)
	{
		for (j = 48; j < 58; j++)
		{
			for (k = 0; k < 58; k++)
			{
				if (i == j || j <= i || i == k || j == k || k <= j)
				continue;
				putchar(i);
				putchar(j);
				putchar(k);
				if (i == 55 && j == 56 && k == 57)
				continue;
				putchar(add);
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0); }

