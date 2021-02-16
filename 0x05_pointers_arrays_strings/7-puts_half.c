#include "holberton.h"
/**
 * puts_half - prints half of str
 * @str: pointer input
 * Return: none
 *
 */
void puts_half(char *str)
{
	int x = 0;
	int halfx;

	while (*(str + x) != '\0')
	{
		x++;
	}
	halfx = x / 2;
	for (; *(str + halfx) != '\0'; halfx++)
	{
		_putchar(*(str + halfx));
	}
	_putchar('\n');
}
