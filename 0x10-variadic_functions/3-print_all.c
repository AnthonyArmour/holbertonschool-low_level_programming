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
 * _call - helper
 * @format: str
 * @num: un int
 * @arg_n: un int
 * @list: list
 * @temp_str: str
 * @x: int
 * Return: void
 */
void _call(const char * const format, unsigned int num, unsigned int arg_n,
	   va_list list, char *temp_str, int x)
{
	while (format[x] != '\0' && format != NULL)
	{
		switch (format[x])
		{
		case 's':
			temp_str = va_arg(list, char *);
			switch (*(temp_str))
			{
			case '\0':
				printf("%s%p", COMMA_MAC(arg_n),
				       va_arg(list, char *));
				arg_n++;
				break;
			default:
				printf("%s%s", COMMA_MAC(arg_n), temp_str);
				arg_n++;
				break;
			}
			break;
		case 'i':
			printf("%s%d", COMMA_MAC(arg_n), va_arg(list, int));
			arg_n++;
			break;
		case 'c':
			printf("%s%c", COMMA_MAC(arg_n),
			       (char)va_arg(list, int));
			arg_n++;
			break;
		case 'f':
			printf("%s%f", COMMA_MAC(arg_n),
			       (float)va_arg(list, double));
			arg_n++;
			break;
		}
		x++;
	}
	(void)num;
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
	unsigned int num = num_of_vars(format), arg_n = 0;
	int x = 0;
	va_list list;
	char *temp_str = NULL;

	va_start(list, format);
	_call(format, num, arg_n, list, temp_str, x);
	printf("\n");
}
