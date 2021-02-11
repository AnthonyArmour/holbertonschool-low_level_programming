#include "holberton.h"
/**
 * print_diagonal - line
 * @n: input
 * Return: none
 */
void print_diagonal(int n)
{
	int y = 0;
	int x = 0;

	for (; x < n; x++)
	{
		for (; y <= x; y++)
		{
			_putchar(' ');
		}
		y = 0;
		_putchar('\\');
		_putchar('\n');
	}
}
