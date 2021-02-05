#include <stdio.h>
/**
 * main - prints 00 - 99
 * Return: 0
 *
 */
int main(void)
{
int x = '0';
int y = '0';
int space = ' ';
int comma = ',';
while (x <= '9')
{
while (y <= '9')
{
putchar(x);
putchar(y);
if (x == '9' && y == '9')
{
break;
}
putchar(comma);
putchar(space);
y++;
}
y = '0';
x++;
}
putchar('\n');
return (0);
}
