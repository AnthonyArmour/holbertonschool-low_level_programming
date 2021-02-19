#include "holberton.h"
#include <stdio.h>
/**
 * leet - encodes str into num
 * @char: pointer
 * Return: str
 *
 */
char *leet(char *x)
{
	int y = 0;
	char letter[] = "aAeEoOtTlL";
	char num[] = "4433007711";
	int yy;

	for (; x[y] != '\0'; y++)
	{
		for (yy = 0; letter[yy] != '\0'; yy++)
		{
			if (x[y] == letter[yy])
			{
				x[y] = num[yy];
			}
		}
	}
	return (x);
}
