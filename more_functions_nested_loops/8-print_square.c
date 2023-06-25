#include "main.h"

/**
 * print_square - Draws a square
 *
 * @n: n is a size of square h
 *
 */

void print_square(int n)
{
	int i, j;

	if (!(n <= 0))
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
