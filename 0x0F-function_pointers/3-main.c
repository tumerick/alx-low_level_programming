#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * quit - prints Error and exits with status code 98
 */

void quit(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - prints results of simple operations
 *
 * @argc: <int> number of arguments
 * @argv: <array> pointer to args
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int x;
	int y;
	char *op;

	(void) argc;

	if (argc != 4)
		quit();

	op = argv[2];
	x = atoi(argv[1]);
	y = atoi(argv[3]);

	if (!get_op_func(op) || op[1] != '\0')
		quit();

	if (y == 0 && (*op == '/' || *op == '%'))
		quit();

	printf("%d\n", get_op_func(op)(x, y));

	return (0);
}
