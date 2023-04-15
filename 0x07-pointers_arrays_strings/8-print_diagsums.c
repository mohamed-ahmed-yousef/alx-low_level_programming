#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - dealing with 2-d array.
 * @a: my array
 * @size: size of array.
*/
void print_diagsums(int *a, int size)
{
int i, j, count1 = 0, count2  = 0;

for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
if (i == j)
count1 += a[i * size + j];

if (i + j == size - 1)
count2 += a[i * size + j];
}
}
printf("%d, %d\n", count1, count2);
}
