#include "holberton.h"
/**
 * more_numbers - prints 0-14 tenb times
 * Return: none
 *
 */
void more_numbers(void)
{
	int x = '0';
	int y = '0';
	int a = '1';
	int b = '0';
	for (; x <= '9'; x++)
	{
		for (; y <= '9'; y++)
		{
			_putchar(y);
		}
		for (; b <= 4; b++)
		{
			_putchar(a);
			_putchar(b);
		}
		_putchar('\n');
		b = '0';
		y = '0';
}
}
