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
	int num;
	int coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	if (atoi(argv[1]) < 0)
	{
		printf("%i\n", coins);
		return (0);
	}
	for (; num >= 25; coins++)
		num = num - 25;
	for (; num >= 10; coins++)
		num = num - 10;
	for (; num >= 5; coins++)
		num = num - 5;
	for (; num >= 2; coins++)
		num = num - 2;
	for (; num >= 1; coins++)
		num = num - 1;
	printf("%i\n", coins);
	return (0);
}
