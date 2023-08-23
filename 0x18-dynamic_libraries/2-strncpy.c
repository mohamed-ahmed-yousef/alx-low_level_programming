#include "main.h"

/**
 * _strncpy - concate two string.
 * @dest : pointer one
 * @src : pointer two
 * @n : int params
 * Return: final string 
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}

	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
