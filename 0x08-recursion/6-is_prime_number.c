#include "holberton.h"
/**
 * num - stuff
 * @x: input
 * @y: input
 * Return: int
 */
int num(int x, int y)
{
	float p = y / x;
	int pp = p;

	if (x == 1)
	{
		return (1);
	}
	if ((p - pp) == 0)
	{
		return (0);
	}
	return (num((x - 1), y));
}

/**
 * is_prime_number - prime number
 * @n: input int
 * Return: int
 *
 */
int is_prime_number(int n)
{
	return (num((x - 1), y));
}
