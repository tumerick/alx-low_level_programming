#include "main.h"
#include <stdio.h>

/**
 * main - sums multiples of 3 or 5.
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int i = 0;
	int sum = 0;

	for (; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}

		printf("%d\n", sum);
	}

	return (0);
}
