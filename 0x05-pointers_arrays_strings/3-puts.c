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
		putchar(str[i])
		i++;
	}

	putchar('\n')
}
