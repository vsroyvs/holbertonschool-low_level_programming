#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - function that selects the correct function
 * @argc: number of argument
 * @argv: pointer to array
 *
 * Return: the operation with two numbers
 */

int main(int __attribute__((unused)) argc, char *argv[])
{
	char *op;
	int n1, n2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	n1 = atoi(argv[1]);
	op = argv[2];
	n2 = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' && n2 == 0) || (*op == '%' && n2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(op)(n1, n2));
	return (0);
}
