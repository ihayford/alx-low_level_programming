#include "main.h"
#include <stdlib.h>

/**
 * free_grid - main function
 * @grid: address of the two dimensional grid
 * @height: grid height
 *
 * Return: nothing
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
