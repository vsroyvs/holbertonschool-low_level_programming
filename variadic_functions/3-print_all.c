#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_char - function that prints chars
 * @separator: char separator
 * @ap: arg variaditic value
 */

void print_char(char *separator, va_list ap)
{
	printf("%s%c", separator, va_arg(ap, int));
}

/**
 * print_integer - function that prints integers
 * @separator: char separator
 * @ap: arg variadict value
 */

void print_integer(char *separator, va_list ap)
{
	printf("%s%d", separator, va_arg(ap, int));
}

/**
 * print_float - function that prints floats
 * @separator: char separator
 * @ap: arg variadict value
 */

void print_float(char *separator, va_list ap)
{
	printf("%s%f", separator, va_arg(ap, double));
}

/**
 * print_string - function that prints strings
 * @separator: char separator
 * @ap: arg caraidict value
 */

void print_string(char *separator, va_list ap)
{
	char *str = va_arg(ap, char *);

	if ((int)(!str))
		str = "(nil)";
	printf("%s%s", separator, str);
}

/**
 * print_all - function that prints anything
 *
 * @format: const pointer to char to cons
 *
 * Return: the function to be used depening of format
 */

void print_all(const char * const format, ...)
{
	fmt frm[] = {
		{"c", print_char},
		{"i", print_integer},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL},
	};
	int i = 0, j;
	char *separator = "";
	va_list ap;

	va_start(ap, format);
	while (format && format[i])
	{
		j = 0;
		while (frm[j].format)
		{
			if (format[i] == frm[j].format[0])
			{
				frm[j].f(separator, ap);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
