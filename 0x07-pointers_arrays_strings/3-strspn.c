#include "holberton.h"
/**
 * _strspn - gets length of a prefix  substring
 * @s: input string
 * @accept: string input
 * Return: int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x = 0;
	int y = 0;
	int yy = 0;
	for (; accept[y] != '\0'; y++)
	{
		continue;
	}
	for (; (s[x] >= 'a' && s[x] <= 'z') || (s[x] >= 'A' && s[x] <= 'Z') ; x++)
	{
		for (yy = 0; accept[yy] != '\0'; yy++)
		{
			if (accept[yy] == s[x])
			{
				break;
			}
		}
		if (accept[yy] == '\0')
		{
			return (x);
		}
	}
	return (x);
}
