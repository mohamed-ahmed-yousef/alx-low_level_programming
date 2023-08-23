#include "main.h"

/**
 * _memcpy - mem copy.
 * @dest: pointer one to copy
 * @src: pointer two to copy.
 * @n: number of time to copy cahr.
 * Return: final string [pointer]
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
