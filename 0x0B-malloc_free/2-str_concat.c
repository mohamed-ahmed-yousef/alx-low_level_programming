#include "main.h"
#include "stdio.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * str_concat - copy string.
 * @s1: string one.
 * @s2: string two
 * Return: return a pointer that contain two string.
*/
char *str_concat(char *s1, char *s2)
{
int len1 = 0;
int len2 = 0;

while (s1[len1] != '\0')
len1++;

while (s2[len2] != '\0')
len2++;
len2++;

int len = (len1 + len2) *sizeof(*s1);
char *concat = malloc(len);
int i = 0;


if (concat == NULL)
return (NULL);

while (i < len1)
{
concat[i] = s1[i];
i++;
}

while (i < len)
{
concat[i] = s2[i - len1];
i++;
}

concat[i] = '\0';
return (concat);
}
