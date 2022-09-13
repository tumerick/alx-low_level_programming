#include "main.h"
#include <stdio.h>

/**
 * times_table - prints the 9 times table.
 *
 * Description: prints the 9 times table...
 *
 * Return: void
 */

void times_table(void)
{
	int multiplicand = 0;
	int multiplier = 0;

	while (multiplier <= 9)
	{
		while (multiplicand <= 9)
		{
			printf("%d, ", multiplicand * multiplier);
			multiplicand++;
		}

		multiplicand = 0;
		multiplier++;
		printf('\n')
	}
}
