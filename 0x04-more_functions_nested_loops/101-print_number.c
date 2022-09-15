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
		_putchar('-');
		x = -n;
	}

	if ((num / 10) > 0)
		print_number(num / 10);

	_putchar((num % 10) + 48);
}
