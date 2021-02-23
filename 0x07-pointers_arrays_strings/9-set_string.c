#include "holberton.h"
#include <stdio.h>
/**
 * set_string - sets value to char
 * @s: pointer to pointer
 * @to: string input
 * Return: none
 */
void set_string(char **s, char *to)
{
	*(s + 0) = to;
}
