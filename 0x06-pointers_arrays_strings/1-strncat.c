#include "main.h"
/**
 * _strncat - concate to string
 * @dest: Main String.
 * @src: concate String.
 * @n: number of bytes to concate.
 * Return: return final String.
*/
char *_strncat(char *dest, char *src, int n)
{
	int len = 0;
	int me = 0;

	while (dest[me] != '\0')
	me++;
	while (src[len] != '\0' && n != 0)
	{
		dest[me + len] = src[len];
		len++;
		n--;
	}
	return (dest);
}
