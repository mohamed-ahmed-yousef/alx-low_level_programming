#include "main.h"

/**
 * _memset - memset
 * @s: pointer 1
 * @b: data 
 * @n: index
 * Return: pointer.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
