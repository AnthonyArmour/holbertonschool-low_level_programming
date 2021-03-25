#include "holberton.h"
#include <stdio.h>
/**
 * clear_bit - sets bit at index to 0
 * @n: num
 * @index: bit index of num
 * Return: 1 or -1 for error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int num;

	if (index > 63)
		return (-1);
	if (!n)
		return (-1);
	num = _pow_recursion(2, index);
	if (num > (unsigned long)*n)
		return (-1);
	if (!((*n >> index) & 1) || *n == 0)
		return (1);
	*n -= (unsigned long)num;
	return (1);
}
/**
 * _pow_recursion - x to the power y
 * @x: num
 * @y: exponent
 * Return: int
 */
unsigned int _pow_recursion(unsigned int x, unsigned int y)
{
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	else
		return (x * _pow_recursion(x, (y - 1)));
}
