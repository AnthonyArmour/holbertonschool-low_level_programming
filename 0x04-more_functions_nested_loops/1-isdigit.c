#include "holberton.h"
/**
 * _isdigit - is a digit
 * @c: input
 * Return: 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
