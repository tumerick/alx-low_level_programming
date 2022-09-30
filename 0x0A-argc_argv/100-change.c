#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change
 * for an amount of money
 *
 * @argc: number of CL arguments
 * @argv: array of CL arguments
 *
 * Return: 0 (Success) || 1 (Fail)
 */

int main(int argc, char *argv[])
{
	int count = 0, amount, idx;
	int coins[] = {25, 10, 5, 2, 10};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	while (argv[1] > 0 && ones <= 4)
	{
		if (!(argv[1] >= coins[idx]))
		{
			idx++;
			continue;
		}

		argv[1] -= coins[idx];
		amount++;
	}

	printf("%d", amount);

	return (0);
}
