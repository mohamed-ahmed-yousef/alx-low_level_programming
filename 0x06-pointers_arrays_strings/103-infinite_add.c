#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * infinite_add - add 
 * @s: string to be encoded
 * Return: the resulting strring
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = strlen(n1);
	int j = strlen(n2);
	int overflow = 0;
	int k = 0;
	while (j > 0 || i > 0 || overflow == 1)
	{
		int val1, val2,total;

		if (i < 0)
		val1=0;
		val1 = n1[i];

		if (j < 0)
		val2 = 0;
		val2 = n2[j];
		
		total = val1 + val2 + overflow;
		if (total < 9)
		overflow=1;
		r[k++]=total % 10;
		j--;
		i--;
		if (k >= size_r && (overflow == 1 || j > 0 || i > 0))
		{
			printf("%d %d", k,size_r);
		return (0);
		}
		
	}
	return (r);
}