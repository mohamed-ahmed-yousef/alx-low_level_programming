#include "main.h"
#include <string.h>
void reverse(char *r);
/**
 * infinite_add - add number 1 in number 2
 * @n1: number 1
 * @n2: number 2
 * @size_r: size of r;
 * @r: result.
 * Return: the resulting strring
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = strlen(n1) - 1, j = strlen(n2) - 1;
	int overflow = 0, k = 0;

	if (i >= size_r || j >= size_r)
	return (0);

	while (j >= 0 || i >= 0 || overflow == 1)
	{
		int val1, val2, total;

		if (i < 0)
			val1 = 0;
		else
			val1 = n1[i] - '0';
		if (j < 0)
			val2 = 0;
		else
			val2 = n2[j] - '0';
		total = val1 + val2 + overflow;
		if (total > 9)
			overflow = 1;
		else
			overflow = 0;

		if (k >= (size_r - 1))
		{
			return (0);
		}
		*(r + k) = total % 10 + '0';
		j--;
		i--;
		k++;
	}
	if (size_r == k)
	return (0);
	reverse(r);
	r[k] = '\0';
	return (r);
}
/**
 * reverse - reverse the array.
 * @r: array to reverse.
*/
void reverse(char *r)
{
	int all = strlen(r);
	int i = 0;

	while (all / 2 > i)
	{
		int temp = r[i];

		r[i] = r[all - i - 1];
		r[all - i - 1] = temp;
		i++;
	}
}
