#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string in reverse
 *
 * @s: <char> string array to reverse
 *
 * Return: void
 */

void print_rev(char *s)
{
	char *t = s;

	while (*t)
		t++;

	t--;

	while (*t)
	{
		_putchar(*t);
		t--;
	}
	_putchar(10);
}
