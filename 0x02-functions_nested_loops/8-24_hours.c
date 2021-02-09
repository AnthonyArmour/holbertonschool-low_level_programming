#include "holberton.h"
/**
 * jack_bauer - prints 24 clock
 * Return: 0
 *
 */
void jack_bauer(void)
{
int a;
int b;
int c;
int d = '0';
  while (d <= '2')
    {
  for (c = '0'; c <= '9'; c++)
    {
  for (b = '0'; b <= '5'; b++)
    {
      for (a = '0'; a <= '9'; a++)
	{
	  if ((d == '2') && (c > '3'))
	    {
	      break;
	    }
	  _putchar(d);
	  _putchar(c);
	  _putchar(':');
	  _putchar(b);
	  _putchar(a);
	  _putchar('\n');
	}
    }
    }
  d++;
    }
}
