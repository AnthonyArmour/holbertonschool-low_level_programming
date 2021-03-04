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

	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL)
		s1 = "";
	if (n >= (unsigned int)_strlen(s2))
		n = (unsigned int)_strlen(s2);
	ptr = malloc((unsigned int)_strlen(s1) + n + 1);
	if (ptr == NULL)
		return (NULL);
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
/**
 * _strlen - len
 * @s: input
 * Return: str
 *
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
