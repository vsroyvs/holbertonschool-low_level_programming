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
		return (n);
	}
	else if (n == 0)
	{
		return (n);
	}
	else
	{
		n = (-1) * n;
		return (n);
	}
}
