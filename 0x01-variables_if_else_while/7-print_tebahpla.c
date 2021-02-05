#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - prints alphabet in reverse
 * Return: 0
 *
 */
int main(void)
{
int x = 'z';
while (x >= 'a')
{
putchar(x);
x--;
}
putchar('\n');
return (0);
}
