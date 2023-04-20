#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_range - creates an array of integers.
 * array contain all the values from min (included) to max (included),
 * ordered from min to ma
 * --------
 * @min: min integer.
 * @max: max integer.
 * -----------
 * Return:  If min > max, return NULL
 *          If malloc fails, return NULL
*/
int *array_range(int min, int max)
{
int *arr, i = 0;

if (min > max)
return (NULL);

arr = malloc((max - min + 1) * sizeof(int));

if (arr == NULL)
return (NULL);

for (i = min; i <= max; i++)
{
arr[i] = i;
}
return (arr);
}
