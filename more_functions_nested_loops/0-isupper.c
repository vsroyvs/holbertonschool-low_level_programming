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
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
		return (0);
}
