#include "variadic_functions.h"

/**
 * sum_them_all - returns a sum of all the parameters
 *
 * @n: number of arguments
 *
 * Return: <int>
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, i = n;
	va_list params;

	va_start(params, n);
	while (i--)
		sum += va_arg(params, int);

	va_end(params);
	return (sum);
}
