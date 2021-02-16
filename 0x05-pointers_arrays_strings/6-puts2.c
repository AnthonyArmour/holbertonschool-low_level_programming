#include "holberton.h"
/**
 * puts2 - prints every other char
 * @str: pointer input
 * Return: none
 */
void puts2(char *str)
{
	int x = 0;

	while (*(str + x) != '\0')
	{
		_putchar(*(str + x));
		x = x + 2;
	}
	_putchar('\n');
}
