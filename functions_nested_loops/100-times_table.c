#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints the n times table, starting with 0
 *	if n > 15 and n < 0 no print anything
 *
 * @n: number will be examinated
 */

void print_times_table(int n)
{
	int i, j, r;

	if (!(n > 15 || n < 0))
	{
		for (j = 0; j <= n; j++)
		{
			printf("0");
			for (i = 1; i <= n; i++)
			{
				r = j * i;
				printf(",");
				printf(" ");
				if (r <= 9)
				{
					printf(" ");
					printf(" ");
				}
				else if (r <= 99)
				{
					printf(" ");
				}
				printf("%d", r);
			}
		printf("\n");
		}
	}
}
