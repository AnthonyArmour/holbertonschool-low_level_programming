#include "holberton.h"
/**
 * flip_bits - outputs num of dif bits between 2 nums
 * @n: num
 * @m: num
 * Return: num of dif bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x = 0;
	unsigned int count = 0;

	while (x < 64)
	{
		if (((n >> x) & 1) && !((m >> x) & 1))
			count++;
		if (((m >> x) & 1) && !((n >> x) & 1))
			count++;
		x++;
	}
	return (count);
}
