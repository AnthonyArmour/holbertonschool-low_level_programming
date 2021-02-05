#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - this function prints
 * alphabet in lowercase
 * Return: 0
 */
int main(void)
{
int x = 'a';
while (x <= 'z')
{
putchar(x);
x++;
}
putchar('\n');
return (0);
}
