#include "main.h"

/**
 * print_line - Use _putchar function to print the alphabet 0 - 9
 *
 * @n: n of times should be printed _
 *
 */

void print_line(int n)
{
	int i;

	if (!(n <= 0))
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
