#include "holberton.h"
/**
 * print_rev - prints reverse str
 * @s: pointer input
 * Return: none
 */
void print_rev(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	for (; i >= 0; i--)
	{
		_putchar(*(s + (i - 1)));
	}
	_putchar('\n');
}
