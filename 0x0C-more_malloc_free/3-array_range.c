#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - arr of ints
 * @min: int
 * @max: int
 * Return: int pointer
 */
int *array_range(int min, int max)
{
	int *int_arr = NULL;
	int x = 0;
	int size = max - min + 1;

	if (min > max)
		return (NULL);
	int_arr = malloc(size * sizeof(int));
	if (int_arr == NULL)
		return (NULL);
	for (x = 0; x < size; x++)
	{
		int_arr[x] = min;
		min++;
	}
	return (int_arr);
}
