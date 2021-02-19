#include "holberton.h"
/**
 * _strncpy - copies a string
 * @dest: str input
 * @src: str input
 * @n: input
 * Return: str
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x = 0;

	for (; x < n && src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}
	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}
	return (dest);
}
