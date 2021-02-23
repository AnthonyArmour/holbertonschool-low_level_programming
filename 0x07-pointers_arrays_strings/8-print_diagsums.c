#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - prints sum of diagnals
 * @a: poiter to int
 * @size: int input
 * Return: none
 */
void print_diagsums(int *a, int size)
{
	int x = 0;
	int sum1 = 0;
	int sum2 = 0;

	for (; x < (size * size); x = x + (size + 1))
	{
		sum1 = sum1 + a[x];
	}
	x = size - 1;
	for (; x <= (size * (size - 1)); x = x + (size - 1))
	{
		sum2 = sum2 + a[x];
	}

	printf("%i, %i\n", sum1, sum2);
}
