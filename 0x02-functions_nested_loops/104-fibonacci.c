#include <stdio.h>

/**
 * main - prints the first 100 numbers of the fibonacci sequence.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 1;
	unsigned long int j = 1, k = 2;
	unsigned long int j1, j2, k1, k2;

	printf("%lu", j);

	for (; i < 91; i++)
	{
		printf(", %lu", k);
		k = k + j;
		j = k - j;
	}

	j1 = j / 1000000000;
	j2 = j % 1000000000;
	k1 = k / 1000000000;
	k2 = k % 1000000000;

	for (i = 92; i < 99; i++)
	{
		printf(", %lu", k1 + (k2 / 1000000000));
		printf("%lu", k2 % 1000000000);

		k1 = k1 + j1;
		j1 = k1 - j1;
		k2 = k2 + j2;
		j2 = k2 - j2;
	}

	printf("\n");

	return (0);
}
