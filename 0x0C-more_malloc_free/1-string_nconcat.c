#include "holberton.h"
#include <stdlib.h>
/**
 * string_nconcat - concats two strings
 * @s1: str input
 * @s2: str input
 * @n: un int input
 * Return: str
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr = NULL;
	unsigned int x = 0, y = 0;

	if (n >= (sizeof(s2) - 1))
		n = sizeof(s2) - 1;
	ptr = malloc(sizeof(s1) + n);
	if (ptr == NULL)
		return (NULL);
	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL)
		s1 = "";
	for (x = 0; s1[x] != '\0'; x++)
	{
		ptr[y] = s1[x];
		y++;
	}
	for (x = 0; x < n; x++)
	{
		ptr[y] = s2[x];
		y++;
	}
	ptr[y] = '\0';
	return (ptr);
}
