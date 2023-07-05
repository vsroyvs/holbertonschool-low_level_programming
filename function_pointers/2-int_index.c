#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 *
 * @array: array of ints
 * @size: numb of element of array
 * @cmp: pointer to function
 *
 * Return: index of the first elementthat is success
 *		0 for no matches, and -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, count = 0;

	if (size <= 0)
		return (-1);
	if (array && size && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				count++;
		}
		if (count)
			return (count);
	}
	return (-1);
}
