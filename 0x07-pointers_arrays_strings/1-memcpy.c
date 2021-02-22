#include "holberton.h"
/**
 * _memcpy - mem copy
 * @dest: string input
 * @src: string input
 * @n: input int
 * Return: string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x = 0;

	for (; x < n; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
