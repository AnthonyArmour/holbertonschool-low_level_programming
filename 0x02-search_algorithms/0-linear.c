#include "search_algos.h"
#include <unistd.h>

/**
 * _print_check - writes search check
 * @idx: index checked
 * @value: value at index
 * Return: None
 */
void _print_check(int idx, int value)
{
	int x;
	char *check = "Value checked array[] = []\n";

	for (x = 0; x < 27; x++)
	{
		if (x == 20)
			print_int(idx);
		if (x == 25)
			print_int(value);
		putchar(check[x]);
	}
}

/**
 * print_int - prints int
 * @n: int to print
 * Return: None
 */

void print_int(int n)
{
	if (n < 0)
	{
		putchar('-');
		n = -n;
	}
	if (n / 10 != 0)
		print_int(n / 10);
	putchar((n % 10) + '0');
}

/**
 * linear_search - finds target value in array
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: Index of first located target value, else -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t x;

	if (!array)
		return (-1);

	for (x = 0; x < size; x++)
	{
		_print_check(x, array[x]);
		if (array[x] == value)
			return (x);
	}
	return (-1);
}
