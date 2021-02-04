#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(void)
{
  int x = 'Z';
  while(x >= 'A')
    {
      int lower_x = tolower(x);
      putchar(lower_x);
      x--;
    }
  printf("\n");
  return (0);
}
