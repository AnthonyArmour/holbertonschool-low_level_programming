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
int x = 'A';
while (x <= 'Z')
{
int lower_x = tolower(x);
putchar(lower_x);
x++;
}
putchar('\n');
return (0);
}
