/**
 * free_grid - function that frees a 2 dimensional grid previously created by alloc_grid function.
 * @grid: grid
 * @height: height
 * Return: NULL if it fails
 */
#include <stdlib.h>
#include "main.h"
void free_grid(int **grid, int height)
{
	if (grid != NULL && height > 0)
	{
		int i = 0;

		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
