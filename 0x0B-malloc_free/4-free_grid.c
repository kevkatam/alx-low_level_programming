#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid previously created by alloc_grid
 *  function
 *  @grid: address of the two dimensional grid
 *  @height: height of the grid
 *  Return: 0
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
