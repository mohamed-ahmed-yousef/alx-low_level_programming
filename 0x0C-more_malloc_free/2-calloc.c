#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: 1st string.
 * @size: 2nd string
 * Return: If nmemb or size is 0, then _calloc returns NULL
 *         If malloc fails, then _calloc returns NULL
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *arr;
unsigned int i = 0;

if (size == 0)
return (NULL);

arr = malloc(size * nmemb);

if (arr == NULL)
return (NULL);

for (i = 0; i < nmemb; i++)
arr[i] = 0;

return (arr);
}
