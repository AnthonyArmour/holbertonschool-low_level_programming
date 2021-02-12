#include "holberton.h"
/**
 * print_number - prints int
 * @n: input
 * Return: none
 */
void print_number(int n)
{
	int x;
	int y;

	if (n == 0)
	{
		_putchar('0');
	}
	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	while (n != 0)
	{
		x = x * 10;
		x = x + (n % 10);
		n = n / 10;
	}
	while (x != 0)
	{
		y = y * 10;
		y = y + (x % 10);
		_putchar('0' + (x % 10));
		x = x / 10;
	}
}
