#include "main.h"

int sqrt_i(int x, int i);

/**
 * _sqrt_recursion -  function that returns the natural square root of a number
 *
 * @n: number will be examined
 *
 * Return: Always x^1/2 (Success)
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_i(n, 0));
}

/**
 * sqrt_i - function that return value of i when i*i is x
 * @x: final value
 * @i: incremental value that will be examined
 * Return: i if success the condicion or -1 if not
 */
int sqrt_i(int x, int i)
{
	if (i * i == x)
		return (i);
	if (i * i > x)
		return (-1);
	return (sqrt_i(x, i + 1));
}
