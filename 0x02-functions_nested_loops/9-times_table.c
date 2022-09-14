#include "main.h"

/**
 * times_table - prints the 9 times table.
 *
 * Description: prints the 9 times table...
 *
 * Return: void
 */

void times_table(void)
{
	int multiplicand, multiplier, product;

	for (multiplier = 0; multiplier <= 9; multiplier++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');

		for (multiplicand = 1; multiplicand <= 9; multiplicand++)
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
