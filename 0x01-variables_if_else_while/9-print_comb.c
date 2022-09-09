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

	for (; n < 58; n++)
	{
		putchar(n); /* number */

		if (n != 57)
		{
			putchar(44); /* comma */
			putchar(32); /* space */
		}
	}

	putchar(10);

	return (0);
}
