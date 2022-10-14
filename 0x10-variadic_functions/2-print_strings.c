#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings
 *
 * @separator: <string> seperator
 * @n: <int> num of strings passed to function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	va_list params;
	unsigned int i = 0;

	va_start(params, n);
	for (; i < n; i++)
	{
		str = va_arg(params, char *);

		if (!(str))
			printf("(nil)");

		else
			printf("%s", str);

		if (i != (n - 1) && separator)
			printf("%s", separator);
	}
	va_end(params);

	printf("\n");
}
