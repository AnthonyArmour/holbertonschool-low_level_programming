#include "holberton.h"
#include <stdio.h>
/**
 * _strspn - gets length of a prefix  substring
 * @s: input string
 * @accept: string input
 * Return: int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x = 0;
	int y = 0;

	for (; accept[y] != '\0'; y++)
	{
		continue;
	}
	for (; s[x] != ','; x++)
	{
		continue;
	}
	return (x);
}
