#include "main.h"

/**
 * puts2 - function that prints a special string
 * @str: pointer to string
 * Return: string modified and new line
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
