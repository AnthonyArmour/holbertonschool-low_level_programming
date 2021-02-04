#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(void)
{
  int x = 'a';
  while(x <= 'z')
    {
      if(x == 'q')
	{
	  continue;
	}
      if(x == 'e')
	{
	  continue;
	}
      putchar(x);
      x++;
    }
  putchar('\n');
  return (0);
}
