#include "holberton.h"
/**
 * print_numbers - print 0 -9
 * Return: none
 *
 */
void print_numbers(void)
{
	int x;
	for (x = '0'; x <= '9'; x++)
	{
		_putchar(x);
}
	_putchar('\n');
}
