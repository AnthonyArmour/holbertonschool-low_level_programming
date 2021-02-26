#include <stdio.h>
#include <stdlib.h>
/**
 * main - main
 * @argc: input
 * @argv: input
 * Return: int
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int x = 1;

	if (argc == 1)
	{
		printf("%i\n", 0);
		return (0);
	}
	for (; x < argc; x++)
	{
		if (argv[x][0] >= '0' && argv[x][0] <= '9')
		{
			sum = sum + atoi(argv[x]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%i\n", sum);
	return (0);
}
