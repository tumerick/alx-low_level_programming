#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers together
 * and prints the result
 *
 * @argc: number of CL arguments
 * @argv: array of CL arguments
 *
 * Return: 0 (Success) || 1 (Fail)
 */

int main(int argc, char *argv[])
{
	int i, j, tmp, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			tmp = argv[i][j];

			if (tmp < '0' || tmp > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
