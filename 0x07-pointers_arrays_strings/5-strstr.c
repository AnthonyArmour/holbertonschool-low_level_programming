#include "holberton.h"
/**
 * _strstr - locates a substring
 * @haystack: string input
 * @needle: string input
 * Return: string
 */
char *_strstr(char *haystack, char *needle)
{
	int x = 0;
	int y = 0;
	int n = 0;
	char *p;

	for (; haystack[x] != '\0'; x++)
	{
		for (y = x; haystack[y] == needle[n]; y++)
		{
			n++;
			if (needle[n] == '\0')
			{
				p = &haystack[x];
				return (p);
			}
			continue;

		}
		n = 0;
	}
	return (0);
}
