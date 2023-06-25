#include "main.h"

/**
 * print_most_numbers - Use _putchar function to print the alphabet 0 - 9
 *	less 2 and 4
 *
 */

void print_most_numbers(void)
{
	int ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		if (ch != '2' && ch != '4')
			_putchar(ch);
	}
	_putchar('\n');
}
