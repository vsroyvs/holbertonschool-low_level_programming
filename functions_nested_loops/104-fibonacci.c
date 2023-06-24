#include "main.h"
#include <stdio.h>

/**
 * main - prints the first 98 fibonacci numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long double a, b, f;
	int i;

	a = 0;
	b = 1;

	for (i = 0; i < 98; i++)
	{
		f = a + b;
		if (i == 97)
			printf("%0.Lf\n", f);
		else
			printf("%0.Lf, ", f);
		a = b;
		b = f;
	}
	return (0);
}
