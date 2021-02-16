#include "holberton.h"
/**
 * _strlen - gets string length
 * @s: pointer input
 * Return: int
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
