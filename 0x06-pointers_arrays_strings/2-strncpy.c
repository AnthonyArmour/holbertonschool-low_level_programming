#include "holberton.h"
/**
 * _strncpy - copies a string
 * @dest: str input
 * @src: str input
 * Return: str
 */
char *_strncpy(char *dest, char *src, int n)
{
	int src_len = 0;
	int x = 0;

	while (src[src_len] != '\0')
	{
		src_len++;
	}
	for (; x < n && x <= src_len; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
