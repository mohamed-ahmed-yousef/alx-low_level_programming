#include "main.h"
#include "stdio.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * free_grid - make a free for 2 -d array.
 * @grid: grid to make free for it.
 * @height: height of grid.
*/
void free_grid(int **grid, int height)
{
int i = 0, j = 0;

for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
