#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry line.
 *
 * Description: prints even numbers of the fibonacci sequence
 * not exceeding 4,000,000.
 *
 * Return: Always (0)
 */

int main(void)
{
	int i = 1, j = 1, res = 0;
	int k;

	while (j <= 4000000)
	{
		if (j % 2 == 0)
		{
			res += j;
		}

		k = j;
		j += i;
		i = k;
	}

	printf("%d\n", res);

	return (0);
}
