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
int **arr = (int **)malloc(height * sizeof(int *));
int i = 0;

for (i = 0; i < height; i++)
{
arr[i] = (int *)malloc(width * sizeof(int));
}
return (arr);
}
