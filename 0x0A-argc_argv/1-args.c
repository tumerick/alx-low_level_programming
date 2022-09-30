#include <stdio.h>

/**
 * main - prints the number of arguments 
 *
 * @argc: number of CL arguments
 * 
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d", argc - 1);
	return (0);
}
