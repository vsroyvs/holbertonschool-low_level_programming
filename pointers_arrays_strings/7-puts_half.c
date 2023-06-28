#include "main.h"

/**
 * puts_half - function that prints the second half of the string
 * @s: pointer to string
 * Return: string and new line
 */

void puts_half(char *s)
{
	int i, j, n;

	for (i = 0; s[i] != '\0'; i++)
		;
	if (i % 2 == 0)
		n = i / 2;
	else
		n = (i - 1) / 2;

	for (j = n; j < i; j++)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
