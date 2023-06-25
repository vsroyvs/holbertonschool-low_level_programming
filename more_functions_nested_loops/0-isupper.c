#include "main.h"

/**
 * _isupper - if a character is uppercase
 *
 * @c: character will be examinated
 *
 * Return: returns 1 if is uppercase
 *      otherwise always 0 (Success)
 */

int _isupper(int c)
{
	if (c > 100 && c < 133)
	{
	return (1);
	}
	else
	return (0);
}
