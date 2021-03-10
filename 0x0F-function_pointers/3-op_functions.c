#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * op_add - adds
 * @a: int
 * @b: int
 * Return: int
 */
int op_add(int a, int b)
{
	int x = 0;

	x = a + b;
	return (x);
}
/**
 * op_sub - subtract
 * @a: int
 * @b: int
 * Return: int
 */
int op_sub(int a, int b)
{
	int x = 0;

	x = a - b;
	return (x);
}
/**
 * op_mul - multiply
 * @a: int
 * @b: int
 * Return: int
 */
int op_mul(int a, int b)
{
	int x = 0;

	x = a * b;
	return (x);
}
/**
 * op_div - divide
 * @a: int
 * @b: int
 * Return: int
 *
 */
int op_div(int a, int b)
{
	int x = 0;

	x = a / b;
	return (x);
}
/**
 * op_mod - modulo
 * @a: int
 * @b: int
 * Return: int
 *
 */
int op_mod(int a, int b)
{
	int x = 0;

	x = a % b;
	return (x);
}
