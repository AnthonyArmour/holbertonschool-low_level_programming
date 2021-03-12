#ifndef VAR_H
#define VAR_H
#define COMMA_MAC(x) ((x) > 0 ? ", " : "")
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char c);
#endif
