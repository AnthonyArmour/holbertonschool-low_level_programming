#include "holberton.h"
/**
 * print_number - prints nums
 * @n: input
 * Return: none
 */
void print_number(int n)
{
	unsigned int x;
	unsigned int nn = n;
	unsigned int y = 1000000000;

	if (n < 0)
	{
		_putchar('-');
		nn = -n;
	}
	if (nn < 1)
	{
		_putchar('0' + nn);
	}
	while (nn >= 1)
	{
		if (nn >= y)
		{
			x = nn / y;
			_putchar('0' + x);
			nn = nn - (x * y);
			y = y / 10;
			while (nn < y)
			{
				_putchar('0' + 0);
				y = y / 10;
			}
		}
		else
		{
			y = y / 10;
		}
	}
}
