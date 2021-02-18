#include "holberton.h"
/**
 * reverse_array - reverese
 * @a: int input
 * @n: int input
 * Return: none
 */
void reverse_array(int *a, int n)
{
	int b[100];
	int x = 0;
	int y = n - 1;

	for (; y >= 0; x++)
	{
		b[x] = a[y];
		y--;
	}
	x = 0;
	for (; x < n; x++)
	{
		a[x] = b[x];
	}
}
