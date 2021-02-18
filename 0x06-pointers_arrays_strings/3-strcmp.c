#include "holberton.h"
/**
 * _strcmp - compares two strings
 * @s1: str input
 * @s2: str input
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int x = 0;
	for (; s1[x] != '\0'; x++)
	{
		if (s1[x] != s2[x])
		{
			return (s1[x] - s2[x]);
		}
	}
	return (s1[x] - s2[x]);
}
