#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * create_array - Create the array.
 * @size: array size
 * @c: array chars.
 * Return: return the array of char..
*/
char *create_array(unsigned int size, char c)
{
unsigned int i = 0;
char *arr = malloc(sizeof(c) * size);

if (size == 0)
return (NULL);

if (arr == NULL)
return (NULL);

while (i < size)
{
arr[i] = c;
i++;
}
return (arr);
}
