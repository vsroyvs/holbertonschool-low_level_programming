#include "main.h"

/**
 * _isalpha - if a character is letter
 *
 * @c: character will be examinated
 *
 * Return: returns 1 if is letter
 *      otherwise always 0 (Success)
 */

int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
	{
		return (1);
	}
	else
	return (0);
}
