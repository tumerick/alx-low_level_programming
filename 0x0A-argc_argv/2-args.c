#include <stdio.h>

/**
 * main - prints recieved arguments
 *
 * @argc: number of CL arguments
 * @argv: array of CL arguments
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
