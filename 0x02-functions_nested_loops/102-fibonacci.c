#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry line.
 *
 * Description: prints the fibonacci sequence.
 *
 * Return: Always (0)
 */

int main(void)
{
	int c = 1;
	long int i = 1, j = 1;
	long int k;

	for (; c <= 50; c++)
	{
		if (c == 50)
		{
			printf("%lu\n", j);
			break;
		}

		printf("%lu, ", j);

		k = j;
		j += i;
		i = k;
	}
	return (0);
}
