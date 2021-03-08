#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints name of file
 * Return: void
 *
 */
int main(void)
{
	char *name = __FILE__;

	printf("%s\n", name);
	return (0);
}
