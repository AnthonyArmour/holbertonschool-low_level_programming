#include "holberton.h"
/**
 * *_strcpy - copies string
 * @dest: pointer input
 * @src: pointer input
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int x = 0;

	for (; *(src + x) != '\0'; x++)
	{
		*(dest + x) = *(src + x);
	}
	*(dest + x) = *(src + x);
	return (dest);
}
