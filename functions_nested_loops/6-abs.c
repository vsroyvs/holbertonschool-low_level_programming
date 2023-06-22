#include "main.h"

/**
 * _abs - prints absolute value of a number
 *
 * @n: number will be examinated
 *
 * Return: Always 0 (Success)
 */

int _abs(int n)
{
	if (n > 0)
	{
		_putchar(n);
	}
	else if (n == 0)
	{
		_putchar(0);
	}
	else
	{
		n = (n * -1);
		_putchar(n);
	}
}
