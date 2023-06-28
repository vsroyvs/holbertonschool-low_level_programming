#include "main.h"

/**
 * main - point entry
 * @argc: count arguments
 * @argv: argument values
 * Return: always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
