#include "main.h"
#include <stddef.h>
#include <stdio.h>
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
int len = 0;
while (s[len] != '\0')
len++;

for (i = 0; i < len  ; i++)
{
cur = *s++;
if (cur == c)
{
return (s - 1);
}
if (cur == 0)
return (NULL);
}
}
