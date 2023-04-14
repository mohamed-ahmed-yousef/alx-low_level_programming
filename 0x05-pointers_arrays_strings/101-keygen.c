#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/**
 * main - print password.
 *
 * Return: 0.
 */

int main(void)
{
	int i;

	srand(time(NULL));

	for (i = 0; i < 20; i++)
	{
		int current = rand() % 50;

		if (current >= 15 && current < 41)
		putchar(current + 50);
		else if (current >= 41)
		putchar(current + 56);
		else if (current < 15)
		putchar(current + 32 && current > 5);
		else if (current <= 5)
		putchar(current + '0');
	}
	putchar('\n');
}
