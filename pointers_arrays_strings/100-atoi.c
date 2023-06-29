#include "main.h"

/**
 * _atoi - function that convert a string to an integer
 *
 * @s: value to be examineted
 * Return: value cstr
 */

int _atoi(char *s)
{
	int i = 0, j, cm = 0, digit = 0;
	unsigned int n = 0;

	while (s[i])
	{
		i++;
	}
	for (j = 0; j < i; j++)
	{	
		if (s[j] == '-')
			cm++;
		if (s[j] >= '0' && s[j] <= '9')
		{
			digit = s[j] - '0';
			n = n * 10 + digit;
			if (s[j + 1] < '0' || s[j + 1] > '9')
				break;
		}
	}
	if (cm % 2 == 1)
		n = n * (-1);

	return (n);
}
