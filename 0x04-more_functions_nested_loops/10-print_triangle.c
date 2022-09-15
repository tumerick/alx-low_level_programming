#include "main.h"

/**
 * print_triangle - prints a triangle of '#' characters.
 *
 * @n: <int> size of triangle
 *
 * Return: void
 */

void print_triangle(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar(10);
		return;
	}

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			if ((i + j) <= n)
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar(10);
	}
}
