#include "main.h"

/**
 * print_triangle - Draws a diagonal triangle
 *
 * @n: size of triangle
 *
 */

void print_triangle(int n)
{
	int i, j, m;

	if (!(n <= 0))
	{
		for (i = 1; i <= n; i++)
		{
			for (j = n - i; j >= 1; j--)
			{
				_putchar(' ');
			}
			for (m = 1; m <= i; m++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
