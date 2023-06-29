#include "main.h"

/**
 * _atoi - function that convert a string to an integer
 *
 * @s: value to be examineted
 * Return: value cstr
 */

int _atoi(char *s)
{
	int i = 0, j, n = 0, cm = 0, digit = 0;

	while (s[i])
	{
		if (s[i] == '-')
			cm++;
		i++;
	}
	for (j = 0; j < i; j++)
	{
		if (s[j] >= '0' && s[j] <= '9')
		{
			digit = s[j] - '0';
			n = n * 10 + digit;
		}
	}
	if (cm % 2 == 1)
		n = n * (-1);

	return (n);

}
