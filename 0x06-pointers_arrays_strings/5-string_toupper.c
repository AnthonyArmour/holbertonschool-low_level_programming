#include "holberton.h"
/**
 * string_toupper - uppercase conv
 * @char: pointer
 * Return: str
 *
 */
char *string_toupper(char *x)
{
	int len = 0;
	int y = 0;

	while (x[len] != '\0')
	{
		len++;
	}
	for (; y < len; y++)
	{
		if (x[y] >= 'a' && x[y] <= 'z')
		{
			x[y] = (x[y] - 32);
		}
	}
	return (x);
}
