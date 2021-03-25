#include "holberton.h"
/**
 * get_bit - prints value of specific bit
 * @n: num
 * @index: bit index
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if ((index > 63))
		return (-1);
	if ((n >> index) & 1)
		return (1);
	else
		return (0);
}
