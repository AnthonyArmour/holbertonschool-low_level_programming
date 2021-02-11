#include "holberton.h"
/**
 * _isupper - checks if letter uppercase
 * @c: input
 * Return: 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
