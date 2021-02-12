#include "holberton.h"
/**
 * print_number - prints int
 * @n: input
 * Return: none
 */
void print_number(int n)
{
	int tmp = 0;
	int x;
	int y;
	unsigned int nn = n;


	if (n < 0)
	{
		_putchar('-');
		nn = -nn;
	}
	while (nn >= 1)
	{
		x = x * 10;
		x = x + (nn % 10);
		nn = nn / 10;
	}
	while (x >= 1)
	{
		y = y * 10;
		y = y + (x % 10);
		_putchar('0' + (x % 10));
		tmp = (x % 10);
		x = x / 10;
	}
	if (x == 0 && tmp == 0)
	{
		_putchar('0' + (x % 10));
	}
}
