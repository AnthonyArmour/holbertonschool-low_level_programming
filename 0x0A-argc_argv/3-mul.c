#include <stdio.h>
#include <stdlib.h>
/**
 * main - main
 * @argv: input
 * @argc: input
 * Return: int
 */
int main(int argc, char *argv[])
{
	int x = atoi(argv[1]);
	int y = atoi(argv[2]);
	int answer = x * y;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%i\n", answer);
	return (0);
}
