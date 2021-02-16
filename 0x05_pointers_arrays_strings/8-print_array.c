#include "holberton.h"
#include <stdio.h>
/**
 * print_array - prints array
 * @a: pointer input
 * @n: input
 * Return: none
 */
void print_array(int *a, int n)
{
	int x;
	for (x = 0; x < n; x++)
	{
		printf("%i", *(a + x));
		if (x != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");

}
