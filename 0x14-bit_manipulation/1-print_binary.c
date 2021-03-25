#include "holberton.h"
/**
 * print_binary - converts decimal to binary
 * @n: num
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long x = n;
	int signal = 0;

	if (n == 0)
		_putchar('0' + n);
	for (x = 1UL << 63; x > 0; x = x >> 1)
	{
		if (x & n)
		{
			_putchar('1');
			signal = 1;
		}
		else
			if (signal == 1)
			{
				_putchar('0');
			}
	}
}
