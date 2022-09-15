#include "main.h"

/**
 * print_most_numbers - prints numbers 1 - 9 excluding 2 || 4
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int i = 0;

	for (; i <= 9; i++)
	{
		if (i == 2 || i == 4)
			continue;

		_putchar(i + 48);
	}
	_putchar(10);
}
