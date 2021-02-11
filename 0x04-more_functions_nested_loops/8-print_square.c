#include "holberton.h"
/**
 * print_square - prints square
 * @size: input
 * Return: none
 */
void print_square(int size)
{
	int x = 0;
	int y = 0;

	if (size > 0)
	{
		for (; x < size; x++)
		{
			for (; y < size; y++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
