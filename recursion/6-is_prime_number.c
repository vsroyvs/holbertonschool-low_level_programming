#include "main.h"

int prime_i(int x, int i);

/**
 * is_prime_number -  function that returns 1 if the number is prime
 *
 * @n: number will be examined
 *
 * Return: 1 prime numbre, 0 if not (Success)
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_i(n, 2));
}

/**
 * prime_i - function that return value of i when i*i is x
 * @x: final value
 * @i: incremental value that will be examined
 * Return: 1 if success the condicion or 0 if not
 */
int prime_i(int x, int i)
{
	if (i >= x)
		return (1);
	else if (x % i == 0)
		return (0);
	else
		return (prime_i(x, i + 1));
}
