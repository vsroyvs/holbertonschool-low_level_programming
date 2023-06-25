#include "main.h"

/**
 * more_numbers - Use _putchar function to print 10 time the num 0 - 14
 *
 *
 */

void more_numbers(void)
{
	int ch, i;

	for (i = '0'; i <= '1'; i++)
	{
		for (ch = '0'; ch <= '9'; ch++)
		{
			if (i == '1')
			{
				_putchar(i);
			}	
			_putchar(ch);
			if (i == '1' && ch == '4')
			{
				ch = 58;
			}	
		}
	}
	_putchar('\n');
}
