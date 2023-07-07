#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all_ - function that prints a string
 * @n: number of folloing variables
 *
 * Return: return the sum of all variables
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int tmp, sum = 0;
	unsigned int i;

	if (n == 0)
	return (0);
	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		tmp = va_arg(ap, int);
		sum += tmp;
	}
	va_end(ap);
	return (sum);
}
