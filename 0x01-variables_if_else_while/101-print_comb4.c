#include <stdio.h>

/**
 * main - entry line.
 *
 * Description: prints all combinations of single-digit numbers.
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int n = 48;
	int m = 48;
	int o = 48;

	for (; n < 58; n++)
	{
		m = n + 1;

		for (; m < 58; m++)
		{
			o = m + 1;

			for (; o < 58; o++)
			{

				putchar(n);
				putchar(m);
				putchar(o);

				if (n < 55 || m < 56 || o < 57)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}

	putchar(10);

	return (0);
}
