#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - main func
 * @argc: int
 * @argv: array of strings
 * Return: int
 */
int main(int argc, char *argv[])
{
	int (*funcp)(int a, int b);
	int x = 0, y = 0, num = 0;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[3][0] == '0' && (argv[2][0] == '%' ||
		    argv[2][0] == '/'))
	{
		printf("Error\n");
		exit(100);
	}
	x = atoi(argv[1]);
	y = atoi(argv[3]);
	funcp = get_op_func(argv[2]);
	if (funcp == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	num = funcp(x, y);
	printf("%d\n", num);
	return (0);
}
