#include "holberton.h"
/**
 * _print_rev_recursion - rev
 * @s: string
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	int x = 0;

	if (s[x] != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(s[x]);
	}

}
