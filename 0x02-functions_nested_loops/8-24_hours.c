#include "holberton.h"
/**
 *
 *
 *
 */
void jack_bauer(void)
{
  int a;
  int b;
  int c;
  int d;
  for (d = '0'; d <= '2'; d++)
    {
  for (c = '0'; c <= '4'; c++)
    {
  for (b = '0'; b <= '6'; b++)
    {
      for (a = '0'; a <= '9'; a++)
	{
	  _putchar(d);
	  _putchar(c);
	  _putchar(':');
	  _putchar(b);
	  _putchar(a);
	  _putchar('\n');
	}
    }
    }
    }
}
