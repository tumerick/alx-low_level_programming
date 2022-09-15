#include "main.h"

/**
 * print_number - prints an integer recursively.
 *
 * @n: <int> to print
 *
 * Return: void
 */

void print_number(int n)
{
	unsigned int x = n;

	if (n < 0)
	{
		x = -n;
		_putchar('-');
	}

	if (x / 10)
	{
		/* recursive call ( to shrink down number )*/
		print_number(x / 10);
	}

	x = x % 10;

	_putchar(x + 48);
}
