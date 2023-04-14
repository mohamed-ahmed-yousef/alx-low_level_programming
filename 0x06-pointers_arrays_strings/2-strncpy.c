#include "main.h"
/**
 * _strncpy - copy src in dest.
 * @dest: main string.
 * @src: copied string.
 * @n: n of copies
 * Return: returned the dest string.
*/
char *_strncpy(char *dest, char *src, int n)
{
	int len = 0;

	while (src[len] != '\0' && n != 0)
	{
		dest[len] = src[len];
		len++;
		n--;
	}
	while (n != 0)
	{
		dest[len] = '\0';
		n--;
		len++;
	}
	return (dest);
}
