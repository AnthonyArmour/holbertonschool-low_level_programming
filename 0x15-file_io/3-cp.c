#include "holberton.h"
/**
 * main -main
 * @argc: argc
 * @argv: argv
 * Return: int
 */
int main(int argc, char *argv[])
{
	int fp, fp1;
	ssize_t ccheck, ccheck1, rcheck = 1;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fp1 = open(argv[1], O_RDONLY);
	if (fp1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fp = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fp == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", argv[2]);
		close(fp1), exit(99);
	}
	Rcheck(rcheck, fp, fp1, buf, argv[2]);
	ccheck = close(fp), ccheck1 = close(fp1);
	if (ccheck == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fp);
		close(fp), exit(100);
	}
	if (ccheck1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fp1);
		close(fp), exit(100);
	}
	return (0);
}
/**
 * Rcheck - loop
 * @rcheck: var
 * @fp: file
 * @fp1: file 1
 * @buf: buf
 * @str: str
 * Return: int
 */
ssize_t Rcheck(ssize_t rcheck, int fp, int fp1, char *buf, char *str)
{
	ssize_t wcheck;

	while ((rcheck = read(fp1, buf, 1024)) > 0)
	{
		wcheck = write(fp, buf, rcheck);
		if (wcheck == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", str);
			close(fp), close(fp1), exit(99);
		}
	}
	return (rcheck);
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
