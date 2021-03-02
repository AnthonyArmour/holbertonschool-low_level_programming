#include <stdlib.h>
#include "holberton.h"
/**
 * create_array - creates array in heap
 * @size: int
 * @c: char
 * Return: char
 *
 */
char *create_array(unsigned int size, char c)
{
	char *ptr = (char *)malloc(size * sizeof(char));
	unsigned int x = 0;

	if (size == 0 || ptr == NULL)
	{
		return (NULL);
	}
	for (; x < size; x++)
	{
		ptr[x] = c;
	}
	return (ptr);
}
