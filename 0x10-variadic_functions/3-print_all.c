#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 *
 * @format: <array> of types of arguments
 */

void print_all(const char * format, ...)
{
	int i = 0;
	char *str, *sep = "";
	
	va_list params;

	if (!(format))
		return;

	va_start(params, format);
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", sep, va_arg(params, int));
				break;

			case 'i':
				printf("%s%d", sep, va_arg(params, int));
				break;

			case 'f':
				printf("%s%f", sep, va_arg(params, double));
				break;

			case 's':
				str = va_arg(params, char *);
				if (!str)
					str = "(nil)";
				printf("%s%s", sep, str);
				break;

			default:
				i++;
				continue;
		}
		sep = ", ";
		i++;
	}
	va_end(params);

	printf("\n");
}
