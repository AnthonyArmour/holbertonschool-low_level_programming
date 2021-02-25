#include "holberton.h"
/**
 * _strlen_recursion - len
 * @s: input string
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
 * @s1: input string
 * @s2: input string
 * @x: int
 * @star: input
 * Return: int
 */
int helper(char *s1, char *s2, int x, int star)
{
	int s1len = _strlen_recursion(s1);
	int s2len = _strlen_recursion(s2);

	if (s2[x] == '*' && s2[s2len - 1] == '*')
	{
		return (1);
	}
	if (s2[x] == '*' && s1[x + 1] == '\0')
	{
		return (helper(s1, (s2 + 1), x, star));
	}
	if (s2[x] == '*' && s1[x] != '\0')
	{
		star = 1;
		return (helper(s1, (s2 + 1), x, star));
	}
	if (star > 0 && s1[x] != s2[x] && s1[x + 1] != '\0')
	{
		return (helper((s1 + 1), s2, x, star));
	}
	if (s2[s2len - 1] != '\0' && s2[s2len - 1] != '*' && s1[s1len - 1] !=
	    s2[s2len - 1])
	{
		return (0);
	}
	if (x >= s1len)
	{
		return (1);
	}
	if (s1[x] != s2[x])
	{
		return (0);
	}
	if (s1[x] == '\0')
	{
		return (1);
	}
	return (helper(s1, s2, (x + 1), star));
}



/**
 * wildcmp - compare
 * @s1: input string
 * @s2: input string
 * Return: int
 */
int wildcmp(char *s1, char *s2)
{
	return (helper(s1, s2, 0, 0));
}
