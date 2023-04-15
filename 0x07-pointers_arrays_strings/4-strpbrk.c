#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - function locates the first
 * occurrence in the string s of any of the bytes in
 * the string accept
 * @s: main string.
 * @accept: checked string.
 * Return: always return string or char.
*/
char *_strpbrk(char *s, char *accept)
{
int i = 0, j = 0;
char *store = accept;
int len1 = 0, len2 = 0;
while (s[len1] != '\0')
len1++;
while (accept[len2] != '\0')
len2++;
for (i = 0; i <= len1; i++)
{
int curri = *s++;
accept = store;

for (j = 0; j <= len2; j++)
{
int currj = *accept++;

if (curri == currj)
return (s - 1);
}
}
return (NULL);
}
