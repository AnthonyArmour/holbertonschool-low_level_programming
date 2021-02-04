#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(void)
{
  int x = 'a';
  while(x <= 'z')
    {
      if(x != 'q' && x != 'e')
        {
          putchar(x);
          x++;
        }
    }
  printf("\n");
  return (0);
}
