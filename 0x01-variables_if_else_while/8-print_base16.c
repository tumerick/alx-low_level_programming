#include <stdio.h>

/**
 * main - entry line.
 *
 * Description: print the numbers of base 16 in lowercase.
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int n = 0;

	for (; n < 48; n++)
	{
		if (n < 10)
			putchar(n + '0');

		if (n > 41)
			putchar(n - 10 + 'A');
	}

	putchar(10);

	return (0);
}
