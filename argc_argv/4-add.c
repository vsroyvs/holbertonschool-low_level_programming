#include "main.h"
#include <stdlib.h>

/**
 * main - point entry
 * @argc: count arguments
 * @argv: argument values
 * Return: always 0 (Success) and 1 for a Error
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	char *c;

	while (--argc)
	{
		for (c = argv[argc]; *c; c++)
			if (*c < '0' || *c > '9')
			{
				printf("Error\n");
				return (1);
			}
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
