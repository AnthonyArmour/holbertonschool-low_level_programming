#include <stdlib.h>
#include "holberton.h"
/**
 * str_concat - concats two strings
 * @s1: string 1
 * @s2: string 2
 * Return: string
 *
 */
char *str_concat(char *s1, char *s2)
{
	int len = _strlen(s1);
	int len2 = _strlen(s2);
	int ptr_size = (len - 1) + (len - 1);
	int x = 0;
	int y = 0;
	char *ptr = (char *)malloc(ptr_size * sizeof(char));

	if (ptr_size < 1)
	{
		return (NULL);
	}
	for (; x < len; x++)
	{
		ptr[x] = s1[x];
	}
	for (; y <= len2; y++)
	{
		ptr[x] = s2[y];
		x++;
	}
	return (ptr);
}