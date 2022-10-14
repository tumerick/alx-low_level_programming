#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * quit - prints Error and exits with status code 98
 *
 * @status: <int>
 */

void quit(int status)
{
	printf("Error\n");
	exit(status);
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
	int x, y;
	char *op;

	if (argc != 4)
		quit(98);

	op = argv[2];
	x = atoi(argv[1]);
	y = atoi(argv[3]);

	if (!get_op_func(op) || op[1] != '\0')
		quit(99);

	if (y == 0 && (*op == '/' || *op == '%'))
		quit(100);

	printf("%d\n", get_op_func(op)(x, y));

	return (0);
}
