#include "holberton.h"
/**
 * _strlen_recursion - len
 * @s: string input
 * Return: int
 *
 */
int _strlen_recursion(char *s)
{
	int x = 0;

	if (s[x] != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
/**
 * helper - helper
 * @s: string input
 * @len: len input
 * @y: input
 * Return: int
 */
int helper(char *s, int len, int y)
{
	if (len > y)
	{
		if (s[len] == s[y])
		{
			return (helper(s, (len - 1), (y + 1)));
		}
		else
		{
			return (0);
		}
	}
	else
	{
		return (1);
	}

}


/**
 * is_palindrome - palindrome
 * @s: string input
 * Return: int
 */
int is_palindrome(char *s)
{
	int x = 0;
	int len = _strlen_recursion(s);

	len = len - 1;

	return (helper(s, len, x));
}
