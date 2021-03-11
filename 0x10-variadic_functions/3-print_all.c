#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * num_of_vars - finds num
 * @str: str
 * Return: int
 *
 *
 */
unsigned int num_of_vars(const char * const str)
{
	unsigned int num = 0;
	int x = 0;

	while (str[x] != '\0')
	{
		switch (str[x])
		{
		case 's':
		case 'i':
		case 'f':
		case 'c':
			num++;
			break;
		}
		x++;
	}
	return (num);
}
/**
 * print_all - moc printf
 * @format: str
 * Return: void
 *
 *
 */
void print_all(const char * const format, ...)
{
	int x = 0;
	va_list list;
	char *temp_str;

	va_start(list, format);
	while (format[x] != '\0' && format != NULL)
	{
		switch (format[x])
		{
		case 's':
			temp_str = va_arg(list, char *);
			switch (*(temp_str))
			{
			case '\0':
				printf("%p", va_arg(list, char *));
				break;
			default:
				printf("%s", temp_str);
				break;
			}
			break;
		case 'i':
			printf("%d", va_arg(list, int));
			break;
		case 'c':
			printf("%c", (char)va_arg(list, int));
			break;
		case 'f':
			printf("%f", (float)va_arg(list, double));
			break;
		}
		if (format[x + 1] != '\0' && (format[x] == 'f' || format[x] ==
					      's' || format[x] == 'c' || format[
						      x] == 'i'))
			printf(", ");
		x++;
	}
	printf("\n");
}
