#ifndef SEARCHALGOS_H
#define SEARCHALGOS_H
#include <stdio.h>
void print_int(int n);
void _print_check(int idx, int value);
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_int_array(const int *array, int left, int right);
#endif
