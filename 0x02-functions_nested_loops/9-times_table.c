#include "holberton.h"
/**
 *
 *
 */
void times_table(void)
{
  int a;
  int b;
  int x;
  int y;
  int z = 0;
  for ( x = 0; x <= 9; x++)
    {
      for ( y = 0; y <= 9; y++)
	{
	  a = z / 10;
	  b = z % 10;
	  if (z > 9)
	    {
	  _putchar('0' + a);
	    }
	  if (z < 10 && y > 0)
	    {
	      _putchar(' ');
	    }
	  _putchar('0' + b);
	  if (y < 9)
	    {
	  _putchar(',');
	  _putchar(' ');
	    }
	  z = z + x;
	}
      _putchar('\n');
      z = 0;
    }
}
