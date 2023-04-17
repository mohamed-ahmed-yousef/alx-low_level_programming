#include "main.h"
#include <string.h>
#include <stdio.h>
int help(char *s1, char *s2, int i, int j);
/**
 * wildcmp - check if the two string are equal or not.
 * @s1: first strig to check.
 * @s2: second string to check.
 * Return: 1 if the two string are equal and 0 if not.
*/
int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0')
{
if (*s2 != '\0' && *s2 == '*')
return (wildcmp(s1, s2 + 1));
if (*s2 == '\0')
return (1);
if (*s2 != '*')
return (0);
}
if (*s2 == '*')
return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
if (*s1 == *s2)
return (wildcmp(s1 + 1, s2 + 1));
return (0);
}
