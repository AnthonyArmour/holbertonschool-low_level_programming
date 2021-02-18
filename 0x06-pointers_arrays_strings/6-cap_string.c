#include "holberton.h"
/**
 * cap_string - capitalizes words
 * @x: pointer
 * Return: str
 *
 */
char *cap_string(char *x)
{
	int len = 0;
	int y = 0;

	while (x[len] != '\0')
	{
		len++;
	}
	for (; y < len; y++)
	{
		if (x[y - 1] == ' ' || x[y - 1] == '\n' || x[y - 1] == '.'
		    || x[y - 1] == ',' || x[y - 1] == ';' || x[y - 1] == '!'
			    || x[y - 1] == '?' || x[y - 1] == '"'
			    || x[y - 1] == '(' || x[y - 1] == ')'
			    || x[y - 1] == '{' || x[y - 1] == '}'
		    || x[y - 1] == '\t' || (y == 0 && x[y] >= 'a'
			    && x[y] <= 'z'))
		{
			if ((y >= 0) && (x[y] >= 'a' && x[y] <= 'z'))
			{
				x[y] = (x[y] - 32);
			}
		}
	}
	return (x);
}
