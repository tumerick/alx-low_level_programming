#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 *
 * @argc: number of CL arguments
 * @argv: array of CL arguments
 *
 * Return: 0 (Success) || 1 (Fail)
 */

int main(int argc, char *argv[])
{
	int x, y;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[0]);
	y = atoi(argv[1]);

	printf("%d\n", x * y);

	return (0);
}
