#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initialize with a specific char
 * @size: size of array
 * @c: char to assign
 * Return: pointer to array or null if fail
 */

char *create_array(unsigned int size, char c)
{
	char *n;
	unsigned int i;

	n = malloc(sizeof(char) * size);
	if (size == 0 || n == 0)
		return (0);
	for (i = 0; i < size; i++)
		n[i] = c;
	return (n);
}
