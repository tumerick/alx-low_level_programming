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
	int count = 0, idx = 0, cents;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	while (cents > 0 && idx <= 4)
	{
		if (!(cents >= coins[idx]))
		{
			idx++;
			continue;
		}

		cents -= coins[idx];
		count++;
	}

	printf("%d\n", count);

	return (0);
}
