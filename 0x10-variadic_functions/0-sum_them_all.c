#include "variadic_functions.h"

/**
 * sum_them_all - returns a sum of all the parameters
 *
 * n: number of arguments
 *
 * Return: <int>
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum;
	va_list params;

	while (n--)
		sum += params[n];

	return (sum);
}
