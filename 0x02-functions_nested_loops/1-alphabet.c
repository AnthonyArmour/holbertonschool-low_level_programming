#include "holberton.h"
/**
 * print_alphabet - prints alphabet
 * Return: 0
 */
void print_alphabet(void)
{
int y = 'a';
while (y <= 'z')
{
_putchar(y);
y++;
}
_putchar('\n');
return;
}
