#include "main.h"

/**
 * print_diagonal - prints a '\' in a diagonal line.
 *
 * @n: length of the diagonal line.
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i, spaces;

	if (n <= 0)
	{
		_putchar(10);
		return;
	}

	for (i = 0; i < n; i++)
	{
		for (space = 0; space < i; space++)
			_putchar(' ');
		_putchar(92);
		_putchar(10);
	}
}
