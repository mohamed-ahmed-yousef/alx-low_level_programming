#include "main.h"

/**
 * _strchr - prints char or not.
 * @s: string to search on it.
 * @c: char to search 
 * Return: 
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{

		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (0);
}
