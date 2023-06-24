#include "main.h"
#include <stdio.h>

/**
 * natural - prints the sum of all the multiples of 3 or 5 below 1024
 *
 */

void natural(void)
{
	int i, sum, sum2, r, res;

	sum = 0;
	sum2 = 0;
	r = 0;
	res = 0;

	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0)
			sum = sum + i;
		else if (i % 5 == 0)
			sum2 = sum2 + i;
		else if (i % 15 == 0)
			res = res - i;
		r = sum + sum2 - res;
	}
	printf("%d", r);
}
