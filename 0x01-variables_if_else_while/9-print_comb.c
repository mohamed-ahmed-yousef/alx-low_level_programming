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

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i == 57)
			add = 36;
		putchar(add);
		putchar(' ');
	}
	putchar('\n');
	return (0); }

