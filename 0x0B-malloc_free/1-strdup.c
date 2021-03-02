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
	char *ptr = (char *)malloc((len - 1) * sizeof(char));

	for (; x < len; x++)
	{
		ptr[x] = str[x];
	}
	return (ptr);
}
