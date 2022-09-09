#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints all combinations of 3 digit numbers.
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int f, s;

	for (f = 0; f < 100; f++)
	{
		for (s = f + 1; s < 100; s++)
		{
			putchar(f / 10 + '0');
			putchar(f % 10 + '0');
			putchar(' ');
			putchar(s / 10 + '0');
			putchar(s % 10 + '0');

			if (f == 98 && s == 99)
				break;
		}
	}

	return (0);
}
