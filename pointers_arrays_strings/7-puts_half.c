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
	n = i / 2;
	if (i % 2 == 1)
		n = n + 1;
	for (j = n; j < i; j++)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
