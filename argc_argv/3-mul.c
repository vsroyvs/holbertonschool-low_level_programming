#include "main.h"
#include <stdlib.h>

/**
 * main - point entry
 * @argc: count arguments
 * @argv: argument values
 * Return: 0 (Success) and 1 for error
 */

int main(int argc, char *argv[])
{
	int i, mult = 1;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		mult = mult * atoi(argv[i]);
	}
	printf("%d\n", mult);
	return (0);
}
