#include "main.h"

/**
 * print_times_table - prints the n times table.
 * 
 * @n: 
 *
 * Return: void
 */

void print_times_table(int n)
{
	if (n > 15 || n <= 0)
		return;

	int multiplicand, multiplier, product;

	for (multiplier = 0; multiplier <= n; multiplier++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');

		for (multiplicand = 1; multiplicand <= n; multiplicand++)
		{
			product = multiplicand * multiplier;

			if ((product / 10) > 0)
			{
				_putchar((product / 10) + '0');
			}

			else
			{
				_putchar(' ');
			}

			_putchar((product % 10) + '0');

			if (multiplicand < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar(10);
	}

}
