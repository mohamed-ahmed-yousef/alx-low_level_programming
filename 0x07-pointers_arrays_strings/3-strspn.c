#include "main.h"
/**
 * _strspn -  gets the length of a prefix substring
 * @s: main string.
 * @accept: secondary string.
 * .
 * Return: return the number.
*/
unsigned int _strspn(char *s, char *accept)
{
int i = 0;
int j = 0;
unsigned int count = 0;

for (i = 0; s[i] != '\0'; i++)
{
int check = 0;
for (j = 0; s[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
count++;
check = 1;
break;
}
}
if (!check)
return (count);
}
return (count);
}
