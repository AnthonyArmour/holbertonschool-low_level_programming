#include "holberton.h"
/**
 * _strlen_recursion
 * @s: string
 * Return: int
 */
int _strlen_recursion(char *s)
{
	int x = 0;

	if (s[x] != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
