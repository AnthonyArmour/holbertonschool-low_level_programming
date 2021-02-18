#include "holberton.h"
#include <stdio.h>
/**
 * _atoi - turns string to int
 * @s: input pointer
 * Return: int
 */
int _atoi(char *s)
{
	unsigned int j = 1;
	unsigned int a = 0;
	int answer = 0;
	char num_str[12];
	int x = 0;
	int neg_count = 0;
	int y = 0;
	char new_numstr[12];

	printf("next\n");
	for (; s[x] != '\0'; x++)
	{
		if (s[x] >= '0' && s[x] <= '9')
			break;
		if (s[x] == '-')
		{
			neg_count++;
		}
	}
	printf("%i\n", neg_count);
	x = 0;
	for (; s[x] != '\0'; x++)
	{
		if (s[x] >= '0' && s[x] <= '9')
		{
			num_str[y] = s[x];
			y++;
			if (s[x + 1] < '0' && s[x + 1] > '9')
			{
				break;
			}
		}
	}
	printf("%s\n", num_str);
	x = 0;
	for (; num_str[y] != '\0'; y++)
	{
		new_numstr[x] = num_str[y];
	}
	printf("%s\n", new_numstr);
	x = 0;
	for (; new_numstr[x] != '\0'; x++)
	{
		a = (new_numstr[x]) - 48;
		answer = answer + (a * j);
		j = j * 10;
	}
	if (neg_count % 2 != 0)
	{
		answer = answer * -1;
	}
	return (answer);
}
