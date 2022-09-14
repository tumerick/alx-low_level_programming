#include "main.h"

/**
 * print_times_table - prints the n times table.
 *
 * @n: <int>
 *
 * Return: void
 */

void print_times_table(int n)
{
	int multiplicand, multiplier, product;

	if (n >= 15 || n <= 0)
	{
		return;
	}
	for (multiplier = 0; multiplier <= n; multiplier++)
	{
		for (multiplicand = 0; multiplicand <= n; multiplicand++)
		{
			product = multiplicand * multiplier;

			if (multiplicand == 0)
			{
				_putchar(product + '0');
			} else if (product < 10 && multiplicand != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(product + '0');
			} else if (product >= 10 && product < 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			} else if (product >= 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((product / 100) + '0');
				_putchar(((product / 10) % 10) + '0');
				_putchar((product % 10) + '0');
			}
		}
		_putchar(10);
	}
}
