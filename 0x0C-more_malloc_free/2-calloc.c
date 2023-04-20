#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of element.
 * @size: size of each element
 * Return: If nmemb or size is 0, then _calloc returns NULL
 *         If malloc fails, then _calloc returns NULL
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *arr;
unsigned int i = 0;

if (size == 0 || nmemb == 0)
return (NULL);

arr = malloc(size * nmemb);

if (arr == NULL)
return (NULL);

for (i = 0; i < nmemb * size; i++)
arr[i] = 0;

return (arr);
}
