#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest, na = a, nb = b, nc = c;
	
	if (a < 0) na = -a;
	if (b < 0) nb = -b;
	if (c < 0) nc = -c;
	
	if (na > nb && na > nb)
	{
		largest = a;
	}
	else if (nb > na && nb > nc)
	{
		largest = b;
	}
	else
	{
		largest = c;
		}

	return (largest);
}
