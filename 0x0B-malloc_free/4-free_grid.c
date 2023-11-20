#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * free_grid- frees up two dimensional grid
 * @grid: double pointer to the grid
 * @height: height of the grid
 * Return: Mothing
 */

void free_grid(int **grid, int height)
{
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
