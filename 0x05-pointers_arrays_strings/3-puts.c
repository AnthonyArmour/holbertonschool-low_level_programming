#include "holberton.h"
/**
 * _puts - puts string
 * @str: poiter input
 * Return: none
 *
 */
void _puts(char *str)
{
	int i = 0;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
