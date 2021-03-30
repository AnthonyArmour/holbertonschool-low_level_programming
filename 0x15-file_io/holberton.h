#ifndef H_H
#define H_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
ssize_t read_textfile(const char *filename, size_t letters);
int _putchar(char c);
int create_file(const char *filename, char *text_content);
ssize_t _strlen(char *s);
int append_text_to_file(const char *filename, char *text_content);

#endif
