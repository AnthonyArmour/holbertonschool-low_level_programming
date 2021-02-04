#include <stdlib.h>
#include <stdio.h>

int main(void)
{
  int y = '\n';
  int x = 0;
  while(x < 10)
    {
      putchar(x);
      x++;
    }
  putchar(y);
  return (0);
}
