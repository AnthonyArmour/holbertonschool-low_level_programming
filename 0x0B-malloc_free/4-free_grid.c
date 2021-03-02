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
	(void)height;
	free(grid);
}
