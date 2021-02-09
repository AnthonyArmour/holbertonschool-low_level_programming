#include "holberton.h"
/**
 * _abs - computes absolute value
 * @
 *
 */
int _abs(int x)
{
  int count = 0;
  if (x >= 0)
    {
      return (x);
    }
  if (x < 0)
    {
      for (; x < 0; x++)
	{
	  count++;
	}
      return (count);
    }
  return (9);
}
