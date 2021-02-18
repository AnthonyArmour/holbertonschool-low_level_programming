#include "holberton.h"
/**
 * _strcmp - compares two strings
 * @s1: str input
 * @s2: str input
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	if (s1 > s2)
	{
		return (15);
	}
	if (s1 < s2)
	{
		return (-15);
	}
	else
	{
		return (0);
	}
}
