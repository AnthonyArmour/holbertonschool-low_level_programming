#include "holberton.h"
/**
 * _strncat - concatinates str
 * @dest: str input
 * @src: str input
 * @n: int bytes
 * Return: none
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int x = 0;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	for (; x < n && src[x] != '\0'; x++)
	{
		dest[dest_len + x] = src[x];
	}
	return (dest);
}
