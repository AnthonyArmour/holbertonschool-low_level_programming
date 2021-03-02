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
	int **d2_array;

	if (width <= 0 || height <= 0)
		return (NULL);
	d2_array = malloc(height * sizeof(int *));
	if (d2_array == NULL)
		return (NULL);
	for (; x < height; x++)
	{
		d2_array[x] = malloc(width * sizeof(int));
		if (d2_array[x] == NULL)
		{
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (; y < width; y++)
		{
			d2_array[x][y] = 0;
		}
	}
	return (d2_array);
}
