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

	for (i = 48; i < 57; i++)
	{
		for (j = 48; j < 58; j++)
		{
			if (i == j || j <= i)
			continue;
			putchar(i);
			putchar(j);
			if (i == 56 && j == 57)
			continue;
			putchar(add);
			putchar(' ');
		}
	}
	putchar('\n');
	return (0); }

