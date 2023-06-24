#include "main.h"
#include <stdio.h>

/**
 * times_table - prints the 9 times table, starting with 0
 *
 */

void times_table(void)
{
	int i, j, r;

	for (j = 0; j <= 9; j++)
	{
		printf("0");
		for (i = 1; i <= 9; i++)
		{
			r = j * i;
			printf(",");
			printf(" ");
			if (r <= 9)
			{
				printf(" ");
			}
		printf("%d", r);
		}
	printf("\n");
	}
}
