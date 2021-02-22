#include "holberton.h"
/**
 * _memset - fills mem w/ constant byte
 * @s:  input poiter
 * @b: input char
 * @n: input
 * REturn: string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x = 0;

	for (; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}
