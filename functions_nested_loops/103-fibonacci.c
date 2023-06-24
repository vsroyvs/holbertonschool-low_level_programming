#include "main.h"
#include <stdio.h>

/**
 * main - point entry
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long a, b, f, i;

	float sum = 0;

	a = 0;
	b = 1;
	f = a + b;

	for (i = 0; i <= f; i++)
	{
		f = a + b;
		if (f % 2 == 0)
			sum = sum + f;

		if (f + b > 4000000)
			i = f + b;
		a = b;
		b = f;
	}
	printf("%.0f\n", sum);
	return (0);
}
