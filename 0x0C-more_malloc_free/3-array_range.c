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
int *arr, i = 0, size = 0, loop = 0;

if (min > max)
return (NULL);
size = max - min + 1;
arr = malloc((size) *sizeof(int));

if (arr == NULL)
return (NULL);

for (i = min; i <= max; i++)
{
arr[loop] = i;
loop++;
}
return (arr);
}
