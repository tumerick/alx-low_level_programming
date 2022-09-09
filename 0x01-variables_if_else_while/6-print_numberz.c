#include <stdio.h>

/**
 * main - entry line.
 *
 * Description: prints numbers 1-10 without using:
 * `char`, `printf`, `puts` etc...
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}

	putchar(10);

	return (0);
}
