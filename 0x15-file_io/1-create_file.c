#include "holberton.h"
/**
 * create_file - name
 * @filename: name
 * @text_content: str
 * Return: int
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t wcheck;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (fd == -1)
		return (-1);
	if (!text_content)
	{
		close(fd);
		return (1);
	}
	wcheck = write(fd, text_content, _strlen(text_content));
	if (wcheck == -1)
		return (-1);
	close(fd);
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
