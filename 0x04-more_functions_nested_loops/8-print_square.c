#include "main.h"

/**
 * print_square - prints a square of '#' chars
 *
 * @n: <int> size of square
 *
 * Return: void
 */

void print_square(int n)
{
	int row, col;

	if (n <= 0)
	{
		_putchar(10);
		return;
	}

	for (row = 0; row < n; row++)
	{
		for (col = 0; col < n; col++)
		{
			_putchar('#');
		}
		_putchar(10);
	}
}
