#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - prints str in str
 * @separator: str
 * @n: un int
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x = 0;
	char *temp_str;
	va_list list;

	va_start(list, n);
	for (x = 0; x < n; x++)
	{
		temp_str = va_arg(list, char *);
		if (temp_str == NULL)
			printf("(nil)");
		else
			printf("%s", temp_str);
		if (separator != NULL && x != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
}
