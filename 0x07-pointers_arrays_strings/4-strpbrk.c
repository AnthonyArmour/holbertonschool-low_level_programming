#include "holberton.h"
/**
 * _strpbrk - searches string
 * @s: string input
 * @accept: string input
 * Return: string
 */
char *_strpbrk(char *s, char *accept)
{
	int x = 0;
	int y = 0;
	char *p;

	for (; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (accept[y] == s[x])
			{
				p = &s[x];
				return (p);
			}
		}
	}
	return ('\0');
}
