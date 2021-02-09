#include "holberton.h"
/**
 * print_last_digit - prints last digit
 * @x: number
 * Return: last digit
 */
int print_last_digit(int x)
{
int y;
if (x >= 0)
{
y = x % 10;
return (y);
}
else
{
y = -x % 10;
return (y);
}
}
