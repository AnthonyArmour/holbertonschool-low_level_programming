#include "holberton.h"
/**
 * print_alphabet_x10 - prints alphabet ten times
 * Return: 0
 */
void print_alphabet_x10(void)
{
int x = 'a';
int y = 'z';
int z = 0;
for (; z <= 9; z++)
{
for (; x <= y; x++)
{
_putchar(x);
}
_putchar('\n');
x = 'a';
}
return;
}