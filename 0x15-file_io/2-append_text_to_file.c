#include "holberton.h"
#include <errno.h>
/**
 * append_text_to_file - appends text to file
 * @filename: name
 * @text_content: str
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp;
	ssize_t wcheck;

	if (!filename)
		return (-1);
	fp = open(filename, O_WRONLY | O_APPEND);
	if (fp == -1 || fp == EACCES)
		return (-1);
	if (!text_content)
	{
		close(fp);
		return (1);
	}
	wcheck = write(fp, text_content, _strlen(text_content));
	if (wcheck == -1)
	{
		close(fp);
		return (-1);
	}
	close(fp);
	return (1);
}
/**
 * _strlen - len
 * @s: str
 * Return: len
 */
ssize_t _strlen(char *s)
{
	ssize_t x = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		continue;
	}
	return (x);
}
