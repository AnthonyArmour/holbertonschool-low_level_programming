#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_name - prints name
 * @name: str
 * @f: function poiter
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
