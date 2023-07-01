#include "main.h"

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
