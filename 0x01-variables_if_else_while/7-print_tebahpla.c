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
int x = 'Z';
while (x >= 'A')
{
int lower_x = tolower(x);
putchar(lower_x);
x--;
}
printf("\n");
return (0);
}
