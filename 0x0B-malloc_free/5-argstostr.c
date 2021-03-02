#include <stdlib.h>
#include "holberton.h"
/**
 * argstostr - concatinate all args
 * @ac: int
 * @av: pointer to pointer
 * Return: pointer
 *
 */
char *argstostr(int ac, char **av)
{
	char *ptr;
	int size;
	int x;
	int y;
	int z = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < ac; x++)
	{
		size = size + (int)sizeof(av[x]);
	}
	ptr = malloc(size + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < ac; x++)
	{
		y = 0;
		while (av[x][y])
		{
			*(ptr + z) = av[x][y];
			z++;
			y++;
		}
		*(ptr + z) = '\n';
		z++;
	}
	*(ptr + z) = '\0';
	return (ptr);
}
