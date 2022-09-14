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
	int c = 2;
	long int i = 1, j = 2, k;
	
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
		i = l;
	}
	return (0);
}
