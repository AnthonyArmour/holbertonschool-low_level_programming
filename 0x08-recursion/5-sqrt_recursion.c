#include "holberton.h"
/**
 * num - sqrt
 * @x: input
 * @y: input
 * Return: int and float
 */
int num(int x, long y)
{
	if ((x * x) == y)
	{
		return (x);
	}
	if ((x * x) > y)
	{
		return (-1);
	}
	return (num((x + 1), y));
}

/**
 * _sqrt_recursion - finds natural sqrt
 * @n: int input
 * Return: int
 *
 */
int _sqrt_recursion(int n)
{
	return (num(1, n));
}
