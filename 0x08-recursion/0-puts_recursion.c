#include "holberton.h"
/**
 * _puts_recursion - prints a string
 * @s: string input
 * Return: void
 *
 */
void _puts_recursion(char *s)
{
	int x = 0;

	if (s[x] == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(s[x]);
		s = s + 1;
		_puts_recursion(s);
	}
}
