#include "holberton.h"
/**
 * binary_to_uint - converts binary to decimal
 * @b: binary num
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int j = 0, x = 0, lx, bit = 0;

	if (!b)
		return (0);
	while (b[x] != '\0')
	{
		if (b[x] != '0' && b[x] != '1')
		{
			return (0);
		}
		x++;
	}
	lx = x - 1;
	while (lx >= 0)
	{
		if (b[lx] == '0')
			bit = 0;
		if (b[lx] == '1')
			bit = 1;
		result += (unsigned int)(bit << j);
		j++;
		lx--;
	}
	return (result);
}
