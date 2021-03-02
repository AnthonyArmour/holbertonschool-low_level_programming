#include <stdlib.h>
#include "holberton.h"
/**
 * alloc_grid - creates 2d grid array
 * @width: int
 * @height: int
 * Return: int pointer
 *
 */
int **alloc_grid(int width, int height)
{
	int x = 0;
	int y = 0;
	int **d2_array = (int **)malloc(width * sizeof(int *));

	if (width <= 0 || height <= 0)
		return (NULL);
	for (; x < width; x++)
	{
		d2_array[x] = (int *)malloc(height * sizeof(int));
	}
	for (x = 0; x < width; x++)
	{
		for (; y < width; y++)
		{
			d2_array[x][y] = 0;
		}
	}
	return (d2_array);
}