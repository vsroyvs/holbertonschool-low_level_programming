#include "function_pointers.h"

/**
 * print_name - Function that prints a name
 *
 * @name: pointer to char
 * @f: pointer to function
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		(*f)(name);
}
