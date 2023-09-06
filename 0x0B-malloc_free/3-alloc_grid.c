#include "main.h"


/**
 * alloc_grid - returns the pointer to 2 dimensional array
 * @width: grid width
 * @height: grid height
 * Return: pointer to array and NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int x, y;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	x = 0;

	while (x < height)
	{
		grid[x] = malloc(sizeof(int) * width);

		if (grid[x] == NULL)
		{
			free(grid);
			for (y = 0 ; y <= height ; y++)
				free(grid[y]);
			return (NULL);
		}
		for (y = 0; y < width ; y++)
			grid[x][y] = 0;
		x++;
	}
	return (grid);
}
