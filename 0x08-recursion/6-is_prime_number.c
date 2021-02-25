#include "holberton.h"
/**
 * num - stuff
 * @n: input
 * @x: input
 * Return: int
 */
int num(int n, int x)
{

	if (n % x == 0)
	{
		return (0);
	}
	if (x > (n / 2))
	{
		return (1);
	}
	return (num(n, (x + 1)));
}

/**
 * is_prime_number - prime number
 * @n: input int
 * Return: int
 *
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (num(n, 2));
}
