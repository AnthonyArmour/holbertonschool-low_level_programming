#include "holberton.h"
/**
 * rev_string - reverses string
 * @s: pointer input
 * Return: none
 */
void rev_string(char *s)
{
	int i = 0;
	int x = 0;
	char temp[1000];

	while (*(s + i) != '\0')
	{
		*(temp + i) = *(s + i);
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		*(s + i) = *(temp + x);
		i--;
		x++;
	}
}
