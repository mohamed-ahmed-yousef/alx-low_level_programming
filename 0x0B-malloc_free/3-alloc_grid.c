#include "main.h"
#include "stdio.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * alloc_grid - create 2-d array.
 * @width: column of array.
 * @height: rows of array.
 * Return: return a 2-d array.
*/
int **alloc_grid(int width, int height)
{
if (height == 0 || width == 0)
return (NULL);

int **arr;
int i = 0;

arr = (int **)malloc(height * sizeof(int *));

if (arr == NULL)
return (NULL);

for (i = 0; i < height; i++)
{
arr[i] = (int *)malloc(width * sizeof(int));
}
return (arr);
}
