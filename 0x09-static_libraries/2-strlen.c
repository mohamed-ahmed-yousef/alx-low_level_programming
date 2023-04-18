#include "main.h"

/**
 * _strlen - return lenght
 * @s: string to find length
 * Return: length of a string
 */

int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		s++;
		l++;
	}
	return (l);
}
