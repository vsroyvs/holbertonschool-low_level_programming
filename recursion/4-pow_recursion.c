#include "main.h"

/**
 * _pow_recursion -  function that returns the value of x raised to the power y
 *
 * @x: number will be base
 * @y: number will be a power
 *
 * Return: Always x^y (Success)
 */

int _pow_recursion(int x, int y)
{
	int pow = 1;

	if (y < 0)
		return (-1);
	if (y > 0)
	{
		pow = pow * x * _pow_recursion(x, y - 1);
	}
	return (pow);
}
