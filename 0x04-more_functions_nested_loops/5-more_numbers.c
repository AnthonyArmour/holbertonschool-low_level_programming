#include "holberton.h"
/**
 * more_numbers - prints 0-14 tenb times
 * Return: none
 *
 */
void more_numbers(void)
{
	int x = '0';
	int y = '0';
	int b = '0';
	for (; x <= '9'; x++)
	{
		for (; y <= '1'; y++)
		{
		        for (; b <= '9'; b++)
			{
				if (y == '1' && b == '5')
				{
					break;
			        }
				if (y == '1')
				{
					_putchar(y);
}
				_putchar(b);
				
			}
			b = '0';
		}
		_putchar('\n');
		b = '0';
		y = '0';
}
}
