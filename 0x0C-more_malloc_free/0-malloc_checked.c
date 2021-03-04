#include "holberton.h"
#include <stdlib.h>
#include <limits.h>
/**
 * malloc_checked - uses malloc
 * @b: un int input
 * Return: void pointer
 *
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = NULL;

	ptr = malloc(b);
	if (ptr == NULL || b >= INT_MAX)
		exit(98);
	return (ptr);
}
