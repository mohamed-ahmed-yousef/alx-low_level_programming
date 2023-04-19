#include "main.h"
#include "stdio.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - concatenates all the arguments of your program..
 * @ac: grid to make free for it.
 * @av: height of grid.
 * Return: NULL if ac == 0 or av == NULL
 *        pointer to a new string  or NULL if fails.
*/
char *argstostr(int ac, char **av)
{
int i = 0, len = 0;
char *result;

for (i = 0; i < ac; i++)
len += strlen(av[i]);

result = (char *)malloc(len + ac + 1);
for (i = 0; i < ac; i++)
{
strcat(result, av[i]);
strcat(result, "\n");
}
result[len + ac] = '\0';

return (result);
}
