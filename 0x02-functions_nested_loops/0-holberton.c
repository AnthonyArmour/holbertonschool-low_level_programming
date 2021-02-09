#include "holberton.h"
/**
 * main - prints Holberton \n
 * Return: 0
 */
int main(void)
{
char *x = "Holberton\n";
int y = 0;
while (y <= 8)
{
_putchar(x[y]);
y++;
}
return (0);
}
