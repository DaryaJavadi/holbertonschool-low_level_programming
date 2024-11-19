/**
 * free_grid - function that frees a 2 dimensional grid previously created by alloc_grid function.
 * @grid: a pointer to the first column of the first row of the array
 * @height: number of rows in the array
 * Return: nothing
 */
#include <stdlib.h>
#include "main.h"
void free_grid(int **grid, int height)
{
	if (grid == NULL || height == 0)
	return;

	int i = 0;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
