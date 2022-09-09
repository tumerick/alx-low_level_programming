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
	int n, m, o, p;

	for (n = 48; n < 58; n++)
	{
		for (m = 48; m < 58; m++)
		{
			o = n;
			p = m + 1;

			for (; o < 58; o++)
			{
				for (; p < 58; p++)
				{

					putchar(n);
					putchar(m);
					putchar(32);
					putchar(o);
					putchar(p);

					if (n < 57 || m < 56 || o < 57 || p < 57)
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}

	putchar(10);

	return (0);
}
