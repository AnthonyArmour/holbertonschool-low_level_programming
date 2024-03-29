#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>
/**
 * _strdup - pointer to newly alloced mem
 * @str: string input
 * Return: string
 *
 *
 */
char *_strdup(char *str)
{
	int x = 0;
	char *ptr = NULL;

	if (str == NULL)
	{
		return (NULL);
	}
	ptr = (char *)malloc(_strlen(str) + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}
	while (str[x])
	{
		ptr[x] = str[x];
		x++;
	}
	ptr[x] = '\0';
	return (ptr);
}
/**
 * _strlen - strlen
 * @s: input
 * Return: str
 *
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
