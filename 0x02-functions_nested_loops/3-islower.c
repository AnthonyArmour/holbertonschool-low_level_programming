#include "holberton.h"
/**
 * _islower - checks for lowercase character
 * Return: none
 *
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
return (0);
}
