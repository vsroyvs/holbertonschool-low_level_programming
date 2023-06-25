#include "main.h"

/**
 * print_diagonal - Draws a diagonal line
 *
 * @n: n of times the character \ should be printed
 *
 */

void print_diagonal(int n)
{
	int i, j;

	if (!(n <= 0))
	{
		for (j = 0; j < n; j++)
		{
			for (i = 0; i < j; i++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
