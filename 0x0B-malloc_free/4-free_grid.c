#include "main.h"

/**
 * free_grid - memory for 2 dimensional grid
 *@grid: freed grid array from memory
 * @height: grid height
 *
 * Return: always (0)
 */


void free_grid(int **grid, int height)
{
	int x = 0;

	while (x < height)
	{
		free(grid[x]);
		x++;
	}

	free(grid);

}
