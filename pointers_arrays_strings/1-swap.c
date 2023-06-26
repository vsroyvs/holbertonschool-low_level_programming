#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 * @a: value to be swaped by b
 * @b: value to be swaped by a
 *
 */

void swap_int(int *a, int *b)
{
	int change;

	change = *b;
	*b = *a;
	*a = change;
}
