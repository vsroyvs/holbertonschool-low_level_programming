#include "main.h"
int _isPal(char *s, int i, int n);
int _strlen_recursion(char *s);

/**
 * is_palindrome - function that returns 1 if a str is palindrome n 0 if not.
 *
 * @s: pointer to a string
 *
 * Return: 1 if a string is palindrome n 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (_isPal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - function that returns the length of a string
 *
 * @s: pointer to a string
 *
 * Return: Always n! (Success)
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i = i + _strlen_recursion(s + 1);
	}
	return (i);
}

/**
 * _isPal - function that returns 1 if a string is palindrome n 0 if not.
 *
 * @s: pointer to a string
 * @i: iterador
 * @n: length of str
 *
 * Return: 1 if a string is palindrome n 0 if not
 */
int _isPal(char *s, int i, int n)
{
	if (*(s + i) != *(s + n - 1))
		return (0);
	if (i >= n)
		return (1);
	return (_isPal(s, i + 1, n - 1));
}
