#include "main.h"
/**
 * _memcpy - copy n byte form memory area to another
 * @dest: frist memeory area.
 * @src: second memeory area.
 * @n: n of time to copy.
 * Return: return dest after modified.
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
