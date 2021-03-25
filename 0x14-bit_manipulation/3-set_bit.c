#include "holberton.h"
/**
 * set_bit - sets bit at index to 1
 * @n: num
 * @index: bit index of num
 * Return: -1 for error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int num = _pow_recursion(2, (int)index);

	if ((*n >> index) & 1)
		return (1);
	if (num >= 0)
	{
		*n += (unsigned long)num;
	return (1);
	}
return (-1);

}
/**
 * _pow_recursion - x to the power y
 * @x: num
 * @y: exponent
 * Return: int
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	else
		return (x * _pow_recursion(x, (y - 1)));
}
