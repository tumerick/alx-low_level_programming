#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers recieved as parameteres to this function
 *
 * @separator: <string> to be printed between the numbers
 * @n: number of parameters to print.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int idx = 0;
	va_list params;

	va_start(params, n);
	for (; idx < n; idx++)
	{
		printf("%d", va_arg(params, int));

		if (idx != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(params);

	printf("\n");
}
