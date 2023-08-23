#include "main.h"

/**
 * *_strcpy - copy string to another
 * @dest: pointer 1
 * @src: poiter 2
 * Return: final string
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
