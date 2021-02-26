#include <stdio.h>
/**
 * main - main
 * @argv: input
 * @argc: input
 * Return: 0
 *
 */
int main(int argc, char *argv[])
{
	int x = 0;

	for (; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
