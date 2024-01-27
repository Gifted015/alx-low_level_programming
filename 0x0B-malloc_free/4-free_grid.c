#include "main.h"

/**
 *free_grid - frees a 2 dimensional grid
 *@grid: grid(2D array previously created by the
 *alloc_grid function) to be freed
 *@height: the height of the grid
 *Return: nothing
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
