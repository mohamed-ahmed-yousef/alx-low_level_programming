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
int len1 = 0, len2 = 0, len = 0, i = 0;
char *concat;

while (s1 && s1[len1] != '\0')
len1++;

while (s2 && s2[len2] != '\0')
len2++;

len = (len1 + len2 + 1) * sizeof(*s1);
concat = malloc(len);


if (concat == NULL)
return (NULL);

while (s1 && i < len1)
{
concat[i] = s1[i];
i++;
}

while (s2 && i < len)
{
concat[i] = s2[i - len1];
i++;
}

concat[i] = '\0';
return (concat);
}
