#include "search_algos.h"

/**
 * print_array - Prints an array of integers
 * @array: The array to be printed
 * @left: Index to begin printing from
 * @right: Index to stop printing
 * Return: void
 */
void print_int_array(const int *array, int left, int right)
{
	int x;

	printf("Searching in array: %d", array[left]);
	for (x = left + 1; x <= right; x++)
	{
		printf(", %d", array[x]);
	}
	printf("\n");
}

/**
 * binary_search - searches for a value in a sorted array
 * @array: array to search through
 * @size: size of array
 * @value: value to search for
 * Return: index where value is found. -1 if failure.
 */
int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int mid = 0;
	int right = size - 1;

	if (!array)
		return (-1);

	while (left <= right)
	{
		print_int_array(array, left, right);
		mid = (left + right) / 2;

		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}
