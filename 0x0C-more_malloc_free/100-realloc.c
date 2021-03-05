#include "holberton.h"
#include <stdlib.h>
/**
 * _realloc - reallocates mem
 * @ptr: void ptr
 * @old_size: un int
 * @new_size: un int
 * Return: void ptr
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *nptr = ptr;

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size > old_size)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
	}
	if (new_size < old_size)
	{
		free(ptr);
		nptr = malloc(new_size);
		if (nptr == NULL)
			return (NULL);
	}
	return (ptr);
}
