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
	int *r, **g;
	int i, ii, s;

	if (width <= 0 || height <= 0)
		return (NULL);
	s = (sizeof(int *) * height) + (sizeof(int) * width * height);
	g = (int **)malloc(s);
	if (g == NULL)
		return (NULL);
	r = (int *)(g + height);
	for (i = 0; i < height; i++)
		g[i] = (r + width * i);
	for (i = 0; i < height; i++)
		for (ii = 0; ii < width; ii++)
			g[i][ii] = 0;
	return (g);
}
