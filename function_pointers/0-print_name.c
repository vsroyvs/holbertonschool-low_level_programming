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
/**
 *Also f(name), dont forget thar void (*f)(char *) is a pointer to function
 *then (*f)(char *) = &print_name_uppercase
 */
}
