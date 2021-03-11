#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers -prints numbers
 * @separator: str
 * @n: int
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x = 0;
	int temp_val = 0;
	va_list list;

	va_start(list, n);
	for (x = 0; x < n; x++)
	{
		temp_val = va_arg(list, int);
		printf("%d", temp_val);
		if (separator != NULL && x != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
