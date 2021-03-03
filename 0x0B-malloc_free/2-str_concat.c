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
	int x = 0;
	int y = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	ptr = (char *)malloc((_strlen(s1) + _strlen(s2)) * sizeof(char) + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (; x < len; x++)
	{
		ptr[x] = s1[x];
	}
	for (; s2[y]; y++)
	{
		ptr[x] = s2[y];
		x++;
	}
	ptr[x] = '\0';
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
