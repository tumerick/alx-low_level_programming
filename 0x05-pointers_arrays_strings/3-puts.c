#include "main.h"
#include <stdio.h>

/**
 * _puts - prints <char> str followed by '\n'
 *
 * @str: <char> string value to print.
 *
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (putchar(str[i]) == EOF)
			return;
		i++;
	}

	if (putchar('\n') == EOF)
		return;

	return;
}
