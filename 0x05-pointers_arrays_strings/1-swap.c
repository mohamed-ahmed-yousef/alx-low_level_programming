#include "main.h"

/**
 * swap_int - swap two number.
 * @a: first variable
 * @b: second variable to swap
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
