#include "main.h"
#include <stddef.h>
/**
 * _strchr - locate a character in the string.
 * @s: string to find char in it.
 * @c: character.
 * .
 * Return: return first accurance of char in string.
*/
char *_strchr(char *s, char c)
{
int i = 0;
int cur;

for (i = 0; s[i] != '\0'; i++)
{
cur = *s++;
if (cur == c)
return (s - 1);
}
return (NULL);
}
