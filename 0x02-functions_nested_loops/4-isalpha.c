#include "holberton.h"
/**
 * _isalpha - checks for alphabetic character
 *  @c: input
 * Return: 0
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
