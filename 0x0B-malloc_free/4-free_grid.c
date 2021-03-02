#include <stdlib.h>
#include "holberton.h"
/**
 * free_grid - free 2d grid
 * @grid: pointer to pointer
 * @height: int
 * Return: void
 *
 */
void free_grid(int **grid, int height)
{
	int x = 0;

	for (x = 0; x <= height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
