#include <stdio.h>

int main(void)
{
    char x = 'a';
    while(x <= 'z')
      {
	if(x == 'q')
	  continue;
	if(x == 'e')
	  continue;
	putchar(x);
	x++;
      }
    putchar('\n');
    return (0);
}
