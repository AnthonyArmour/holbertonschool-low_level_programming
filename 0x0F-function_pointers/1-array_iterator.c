#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - prints arr of ints
 * @array: arr of ints
 * @size: un int
 * @action: function pointer
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x = 0;

	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
}
