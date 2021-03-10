#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: int arr
 * @size: int
 * @cmp: function pointer
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x = 0;

	if (size <= 0)
		return (-1);
	if (cmp && array)
	{
		for (x = 0; x < size; x++)
		{
			if (cmp(array[x]) != 0)
				return (x);
		}
	}
	else
		return (NULL);
	return (-1);
}
