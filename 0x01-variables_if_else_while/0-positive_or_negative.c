#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - <int> n is assigned a random value each execution.
 *
 * Description: determines whether random <int> n
 * is positive, negative, or zero.
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n == 0)
		printf("%d is zero\n", n);

	if (n > 0)
		printf("%d is positive\n", n);

	if (n < 0)
		printf("%d is negative\n", n);

	return (0);
}
