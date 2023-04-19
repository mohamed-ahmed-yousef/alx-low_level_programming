#include "main.h"
#include "stdio.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * _strdup - copy string.
 * @str: string to copy it..
 * Return: return the array of copied string.
*/
char *_strdup(char *str)
{
int len = 0, i = 0;
char *new_str;
if (str == NULL)
return (NULL);

while (str[len] != '\0')
len++;
new_str = malloc((len + 1) * sizeof(*str));
if (new_str == NULL)
return (NULL);

while (str[i] != '\0')
{
new_str[i] = str[i];
i++;
}
new_str[i] = '\0';
return (new_str);
}
