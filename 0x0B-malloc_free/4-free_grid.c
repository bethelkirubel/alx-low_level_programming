#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - free the grid
 * @grid: the grid
 * @height: height of the intiger
 */

void free_grid(int **grid, int height)
{
int i;

for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
