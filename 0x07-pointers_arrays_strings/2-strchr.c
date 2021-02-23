#include "holberton.h"
/**
 * _strchr - locates char
 * @s: string input
 * @c: char input
 * Return: string
 */
char *_strchr(char *s, char c)
{
	int x = 0;
	char *p;

	for (; s[x] != '\0'; x++)
	{
		if (s[x] == c)
		{
			p = &s[x];
			return (p);
		}
	}
	return (s);
}
