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
	int multiplicand = 0;
	int multiplier = 0;

	while (multiplier <= 9)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');

		while  (multiplicand <= 9)
		{
			int product = multiplicand * multiplier;

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

			multiplicand++;
		}
		multiplicand = 0;
		multiplier++;

		_putchar(10);
	}
}
