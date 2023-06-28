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
	int i, sum = 0;
	char *c;


	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			c = argv[i];
			if ((*c >= 'A' && *c <= 'Z') || (*c >= 'a' && *c <= 'z'))
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else if (argc == 1)
	{
		printf("0\n");
	}
	return (0);
}
