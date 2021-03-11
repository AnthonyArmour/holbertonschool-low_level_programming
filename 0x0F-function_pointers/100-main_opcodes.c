#include <stdio.h>
#include <stdlib.h>
/**
 * main - main
 * @argc: int
 * @argv: arr of strings
 * Return: int
 */
int main(int argc, char *argv[])
{
	char *funcp = (char *)main;
	int num_bytes = 0, x = 0;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	num_bytes = atoi(argv[1]);
	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (x = 0; x < num_bytes; x++)
	{
		printf("%x ", funcp[x]);
	}
	printf("\n");

}
