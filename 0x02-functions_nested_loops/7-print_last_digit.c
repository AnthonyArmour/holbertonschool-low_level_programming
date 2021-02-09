#include "holberton.h"
/**
 * print_last_digit - prints last digit
 * @x: number
 * Return: last digit
 */
int print_last_digit(int x)
{
int y;
y = x % 10;
if (y < 0)
{
y = y * -1;
}
_putchar('0' + y);
return (y);
}
