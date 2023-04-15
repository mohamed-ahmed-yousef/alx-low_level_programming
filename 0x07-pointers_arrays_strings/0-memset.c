#include "main.h"
/**
 * _memset - change the buffer content.
 * @b: char to chage the buffer with it.
 * @n: number of time changing the buffer.
 * @s: buffer to change it.
 * Return: return modified string.
*/
char *_memset(char *s, char b, unsigned int n)
{
int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
