#include "main.h"

/**
 * more_numbers - prints the numbers 1 - 14 ten times.
 *
 * Return: void
 */

void more_numbers(void)
{
	int i, j, c;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			c = j;
			if (j > 9)
			{
				_putchar(1 + 48);
				c = j % 10;
			}
			_putchar(c + 48);
		}
		_putchar(10);
	}
}
