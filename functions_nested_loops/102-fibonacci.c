#include "main.h"
#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int a, b, f, i;

	a = 0;
	b = 1;

	for (i = 0; i < 50; i++)
	{
		f = a + b;
		if (i == 49)
			printf("%d\n", f);
		else
			printf("%d, ", f);
		a = b;
		b = f;
	}
	return (0);
}
