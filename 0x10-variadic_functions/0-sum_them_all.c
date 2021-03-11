#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sums nums
 * @n: un int
 * Return: int
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int x = 0;
	int sum = 0, temp_val = 0;
	va_list list;

	if (n == 0)
		return (0);
	va_start(list, n);
	for (x = 0; x < n; x++)
	{
		temp_val = va_arg(list, int);
		sum += temp_val;
	}
	return (sum);
}
