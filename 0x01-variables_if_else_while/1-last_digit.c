#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
int n;
n = rand() - RAND_MAX / 2;
srand(time(0));
  
printf("Last digit of %i is %i ", n, (n % 10));
if ((n % 10) < 6 && (n % 10) > 0)
{
printf("and is less than 6 and not 0\n");
}
if ((n % 10) == 0)
{
printf("and is 0\n");
}
if ((n % 10) > 5)
{
printf("and is greater than 5\n");
}
/* your code goes there */
return (0);
}
