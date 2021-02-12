#include "holberton.h"
/**
 * print_line - prints line
 * @n: input
 * Return: 0
 */
void print_line(int n)
{
	if (n > 0)
	{
		for (; n > 0; n--)
			_putchar('_');
	}
	_putchar('\n');
}
