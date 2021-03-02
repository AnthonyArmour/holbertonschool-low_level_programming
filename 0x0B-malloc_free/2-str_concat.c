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
	int ptr_size;
	int x = 0;
	int y = 0;
	char *ptr;

	if (s1 == NULL)
		len = 1;
	if (s2 == NULL)
		len2 = 1;
	ptr_size = (len - 1) + (len2 - 1);
	ptr = (char *)malloc((ptr_size + 1) * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}
	if (s1 != NULL)
	{
		for (; x < len; x++)
		{
			ptr[x] = s1[x];
		}
	}
	if (s2 != NULL)
	{
		for (; y <= len2; y++)
		{
			ptr[x] = s2[y];
			x++;
		}
	}
	if (s2 == NULL)
	{
		ptr[x] = '\0';
	}
	return (ptr);
}
/**
 * _strlen - len
 * @s: input
 * Return: int
 *
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
