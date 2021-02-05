#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints 0-9 using putchar
 * Return: 0
 *
 */
int main(void)
{
int y = '\n';
int x;
for (x = '0'; x <= '9'; x++)
{
putchar(x);
}

putchar(y);
return (0);
}
