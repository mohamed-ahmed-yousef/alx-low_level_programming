#include "main.h"
/**
 * reverse_array - to reverse the array.
 * @a: our array.
 * @n: number of element in array.
*/
void reverse_array(int *a, int n)
{
	int i = 0;
	int x = n / 2;

	for (i = 0; i < x; i++)
	{
		int store = a[i];

		a[i] = a[n - 1 - i];
		a[n - 1 - i] = store;
	}
}
