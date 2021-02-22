#include "holberton.h"
/**
 * print_chessboard - prints grid
 * @a: 2d array
 * Return: none
 */
void print_chessboard(char (*a)[8])
{
	int x = 0;
	int y = 0;

	for (; x < 8; x++)
	{
		for (y = 0; y < 8; y++)
		{
			_putchar(a[x][y]);
		}
		_putchar('\n');
	}
}
