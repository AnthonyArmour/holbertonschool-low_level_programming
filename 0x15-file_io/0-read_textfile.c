#include "holberton.h"
/**
 * read_textfile - reads textfile
 * @filename: filename
 * @letters: letters
 * Return: ssize_t
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int l;
	char *buf;
	ssize_t count;

	if (!filename)
		return (0);
	l = open(filename, O_RDONLY);
	if (l == -1)
		return (0);
	buf = malloc(sizeof(letters));
	if (!buf)
		return (0);
	read(l, buf, letters);
	count = write(STDOUT_FILENO, buf, letters);
	if (count == -1)
		count = 0;
	free(buf);
	close(l);
	return (count);
}
