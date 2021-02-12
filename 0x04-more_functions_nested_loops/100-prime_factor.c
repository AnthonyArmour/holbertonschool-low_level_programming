#include <stdio.h>
/**
 * main - prints largest prime number
 * Return: 0
 *
 */
int main(void)
{
	unsigned long int x = 612852475143;
	unsigned long int y;

	for (y = 1; y < x; y++)
	{
		if ((x % y) == 0)
		{
			x = x / y;
		}
	}
	printf("%lu\n", x);
	return (0);
}
