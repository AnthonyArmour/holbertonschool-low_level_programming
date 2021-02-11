#include "holberton.h"
void print_times_table(int n)
{
	int a;
	int b;
	int x;
	int y;
	int z = 0;
	if (n > 15 || n < 0)
	{
	for ( x = 0; x <= n; x++)
	{
		for ( y = 0; y <= n; y++)
		{
			a = z / 10;
			b = z % 10;
			if (z > 9)
			{
				_putchar('0' + a);
			}
			if (z < 10 && y > 0)
			{
				_putchar(' ');
			}
			_putchar('0' + b);
			if (y < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			z = z + x;
		}
		_putchar('\n');
		z = 0;
	}
	}
}
