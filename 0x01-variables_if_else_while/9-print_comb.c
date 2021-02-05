#include <stdio.h>
/**
 * main - prints all combinations of single digit
 * numbers
 * Return: 0
 */
int main(void)
{
int x = '0';
int space = ' ';
int comma = ',';
while (x <= '9')
{
putchar(x);
if (x < '9')
{
putchar(comma);
putchar(space);
}
x++;
}
putchar('\n');
return (0);
}
