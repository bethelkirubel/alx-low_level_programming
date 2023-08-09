#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - builds a grid
 * @height: int
 * @width: int
 * Return: grid of NULL
 */

int **alloc_grid(int width, int height)
{
int **grid;
int i;
int j;
int k;

if (width <= 0 || height <= 0)
return (NULL);

grid = malloc(sizeof(int *) * height);
if (grid == NULL)
return (NULL);

for (i = 0; i < height && i < width ; i++)
{
grid[i] = malloc(sizeof(int *) * width);
if (grid[i] == NULL)
{
while (i >= 0)
{
free(grid[i]);
i--;
}
return (NULL);
}
}
for (j = 0; j < height; j++)
{
for (k = 0; k < width; k++)
grid[j][k] = 0;
}
return (grid);
}




