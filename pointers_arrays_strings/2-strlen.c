#include "main.h"

/**
 * _strlen - function that returns the length of string
 *
 * @s: value to be examineted
 * Return: value cstr
 */

int _strlen(char *s)
{
	int cstr = 0;

	while (s[cstr])
		cstr++;
	return (cstr);
}
