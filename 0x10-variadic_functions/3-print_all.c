#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_char - prints a <char>
 * @arg: <list>
 */

void print_char(va_list arg)
{
	char letter;

	letter = va_arg(arg, int);
	printf("%c", letter);
}

/**
 * print_int - prints an <int>
 * @arg: <list>
 */
void print_int(va_list arg)
{
	int num;

	num = va_arg(arg, int);
	printf("%d", num);
}

/**
 * print_float - prints an float.
 * @arg: <list>
 */
void print_float(va_list arg)
{
	float num;

	num = va_arg(arg, double);
	printf("%f", num);
}

/**
 * print_string - prints a string
 * @arg: <list>
 */
void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);

	if (!str)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}

/**
 * print_all - prints everything recieved as a param
 * @format: A string of characters representing the argument types.
 */

void print_all(const char * const format, ...)
{
	va_list params;
	int i = 0, j = 0;
	char *separator = "";

	print_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(params, format);
	while (format && (*(format + i)))
	{
		j = 0;

		while (j++ < 4 && (*format != *(funcs[j].symbol)))
			;

		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print(args);
			separator = ", ";
		}

		i++;
	}
	va_end(params);

	printf("\n");
}
