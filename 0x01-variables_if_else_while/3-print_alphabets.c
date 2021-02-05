#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - this function prints alphabet
 * in upper and lowercase
 * Return: 0
 */
int main(void)
{
int y = 'A';
int x = 'A';
int enter = '\n';
while (x <= 'Z')
{
int lower_x = tolower(x);
putchar(lower_x);
x++;
}
while (y <= 'Z')
{
putchar(y);
y++;
}
putchar(enter);
return (0);
}
