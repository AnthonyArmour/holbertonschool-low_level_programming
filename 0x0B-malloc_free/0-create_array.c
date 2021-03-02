#include <stdlib.h>
#include "holberton.h"
char *create_array(unsigned int size, char c)
{
	char *ptr = (char *)malloc(size * sizeof(char));
	unsigned int x = 0;

	if (size == 0)
	{
		return (NULL);
	}
	for (; x < size; x++)
	{
		ptr[x] = c;
	}
	return (ptr);
}
