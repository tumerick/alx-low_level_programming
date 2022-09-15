#include "main.h"

/**
 * print_line - prints a line in the terminal.
 *
 * @n: length of the line to be printed.
 *
 * Return: void
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar(10);
		return;
	}

	for (i = 0; i <= 10; i++)
	{
		_putchar(95);
	}

	_putchar(10);
}
