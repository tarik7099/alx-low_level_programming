#include "main.h"
#include <stdlib.h>

/**
 * free_grid - fonction frees a 2 dimensional grid.
 * @grid: multidimensional array of integers.
 * @height: height  grid.
 *
 * Return: 0
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
