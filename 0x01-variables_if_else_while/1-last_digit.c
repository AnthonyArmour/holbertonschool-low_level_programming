#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
  int n;

  srand(time(0));
  n = rand() - RAND_MAX / 2;
  int lastdigit = n % 10;
  printf("Last digit of %i is %i ", n, lastdigit);
  if (lastdigit < 6)
    {
      printf("and is less than 6 and not 0\n");
    }
  if (lastdigit == 0)
    {
      printf("and is 0\n");
    }
  if (lastdigit > 5)
    {
      printf("and is greater than 5\n");
    }
  /* your code goes there */
  return (0);
}
