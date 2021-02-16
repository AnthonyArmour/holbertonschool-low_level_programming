#include "holberton.h"
/**
 * puts2 - prints every other char
 * @str: pointer input
 * Return: none
 */
void puts2(char *str)
{
	int x = 0;

	while (*(str + x))
	{
		if (x % 2 == 0)
		{
		_putchar(*(str + x));
		}
		x++;
	       	}
	_putchar('\n');
}
