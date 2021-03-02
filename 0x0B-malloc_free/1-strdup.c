#include <stdlib.h>
#include "holberton.h"
/**
 * _strdup - pointer to newly alloced mem
 * @str: string input
 * Return: string
 *
 *
 */
char *_strdup(char *str)
{
	int len = _strlen(str);
	int x = 0;

	if (len <= 0 && str == NULL)
	{
		return (NULL);
	}
	char *ptr = (char *)malloc((len - 1) * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (; x < len; x++)
	{
		ptr[x] = str[x];
	}
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
