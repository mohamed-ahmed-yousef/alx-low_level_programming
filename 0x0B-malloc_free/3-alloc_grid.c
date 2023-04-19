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
int i = 0, j = 0;
int **arr;

if (height <= 0 || width <= 0)
return (NULL);

arr = (int **)malloc(height * sizeof(int *));

if (arr == NULL)
return (NULL);

for (i = 0; i < height; i++)
{
arr[i] = (int *)malloc(width * sizeof(int));
if (arr[i] == NULL)
{
while (i >= 0)
{
free(arr[i]);
i--;
}
return (NULL);
}
}
for (i = 0; i < height; i++)
{
for (j = 0; j < height; j++)
arr[i][j] = 0;
}
return (arr);
}
