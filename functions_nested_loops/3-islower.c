#include <ctype.h>
#include "main.h"

/**
 * _islower - if a character is lowercase
 *
 * @c: character will be examinated
 *
 * Return: returns 1 if is lowercase
 *	otherwise always 0 (Success)
 */

int _islower(int c)
{
	int c;

	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	return (0);
}
