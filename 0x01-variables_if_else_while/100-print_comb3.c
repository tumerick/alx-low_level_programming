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

	for (; n < 58; n++)
	{
		m = n + 1;

		for (; m < 58; m++)
		{
			putchar(n);
			putchar(m);

			if (n < 56 || m < 57)
			{
				putchar(44);
				putchar(32);
			}
		}
	}

	putchar(10);

	return (0);
}
