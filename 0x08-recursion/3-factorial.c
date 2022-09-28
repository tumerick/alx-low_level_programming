#include "main.h"

/**
 * factorial - determines the factorial of a given integer
 *
 * @n: <int>
 *
 * Return: <int>
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
