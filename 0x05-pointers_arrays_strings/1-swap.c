#include "holberton.h"
/**
 * swap_int - swaps variable values
 * @a: input
 * @b: input
 * Return: none
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
