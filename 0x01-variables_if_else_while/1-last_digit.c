#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - <int> n is assigned a random value each execution.
 *
 * Description: prints the last digit stored in the value <int> n
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int n, digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	digit = n % 10;

	printf("Last digit of %d is %d\n", n, digit);

	return (0);
}
