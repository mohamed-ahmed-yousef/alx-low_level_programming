#include <stdio.h>
#include <math.h>
/**
 * main - print max prime factor.
 *
 * This function used to print 0-14 ten times
 * Return: always return 0
 */
int main(void)
{
	long int  n = 612852475143;
	long int i = 0;
	long int max = 0;

	for (i = 2; i < sqrt(n) + 1; i++)
	{
		while (n % i == 0)
		{
			max = i;
			n = n / i;
		}
	}
	if (n > 2)
	max = n;
	printf("%ld\n", max);
	return (0);
}
