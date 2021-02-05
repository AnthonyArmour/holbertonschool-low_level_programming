#include <stdio.h>
/**
 * main - prints numbers of base12
 * Return: 0
 *
 */

int main(void)
{
char a = 'a';
char num = '0';
while (num <= '9')
{
putchar(num);
num++;
}
while (a <= 'f')
{
putchar(a);
a++;
}
putchar('\n');
return (0);
}
