#include "holberton.h"
/**
 * _isalpha - checks for alphabetic character
 * Return: none
 *
 */
int _isalpha(int c)
{
  if (c >= 'a' && c <= 'z')
    {
      return (1);
    }
  if (c >= 'A' && c <= 'Z')
    {
      return (1);
    }
  return (0);
}
