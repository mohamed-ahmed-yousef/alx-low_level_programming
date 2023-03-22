#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 96;

	while (a < 122)
	{
		a++;
		if (a == 113 || a == 101)
			continue;
		putchar(a);
	}
	putchar('\n');

	return (0); }
