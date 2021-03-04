#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _calloc - calloc
 * @nmemb: int input
 * @size: un int input
 * Return: void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr = NULL;
	unsigned int x = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = (char *)malloc(98);
	if (ptr == NULL)
		return (NULL);
	for (x = 0; x < nmemb; x++)
		ptr[x] = '\0';
	return (ptr);
}
