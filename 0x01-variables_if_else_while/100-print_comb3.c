#include <stdio.h>
/**
 *
 *
 */
int main(void)
{
int x = '0';
int y = '1';
int comma = ',';
int space = ' ';
while (x <= '9')
{
while (x <= '9')
{
if (x < y)
{
putchar(x);
putchar(y);
if (x != '8' && y != '9')
{
putchar(comma);
putchar(space);
y++;
}
}
}
x++;
}
putchar('\n');
return (0);
}
