#include "holberton.h"
/**
 * rot13 - encodes string using rot13
 * @x: pointer
 * Return: str
 *
 */
char *rot13(char *x)
{
	int y = 0;
	char letter[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char num[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int yy;

	for (; x[y] != '\0'; y++)
	{
		for (yy = 0; letter[yy] != '\0'; yy++)
		{
			if (x[y] == letter[yy])
			{
				x[y] = num[yy];
				break;
			}
		}
	}
	return (x);
}
