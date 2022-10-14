#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints opcodes of itself
 *
 * @argc: number of arguments
 * @argv: <array> of pointers to arguments.
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int bytes, idx = 0;

	int (*address)(int, char **) = main;
	unsigned char op;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (; idx < bytes; idx++)
	{
		op = *(unsigned char *) address;
		printf("%.2x", op);

		if (idx == bytes - 1)
			continue;

		printf(" ");
		address++;
	}

	printf("\n");
	return (0);
}
