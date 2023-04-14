#include "main.h"
/**
 * _strcat - concate to string
 * @dest: Main String.
 * @src: concate String.
 * Return: return final String.
*/
char *_strcat(char *dest, char *src)
{
	int len = 0;
	int me = 0;

	while (dest[me] != '\0')
	me++;
	while (src[len] != '\0')
	{
		dest[me + len] = src[len];
		len++;
	}
	return (dest);
}
