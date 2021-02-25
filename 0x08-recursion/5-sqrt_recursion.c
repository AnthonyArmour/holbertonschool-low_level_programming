#include "holberton.h"
/**
 * _sqrt_recursion - returns square root
 * num - sqrt
 * @n: int inputt
 * @x: input
 * @y: input
 * Return: int and float
 */
float num(float x, float y)
{
	if ((x * x) == y)
	{
		return (x);
	}
	if (x < 0)
	{
		return (-1);
	}
	else
	{
		return (num((x - 1), y));
	}
}






int _sqrt_recursion(int n)
{

	if (num(n, n) == -1)
	{
		return (-1);
	}
	else
	{
		return (num(n, n));
	}
}
