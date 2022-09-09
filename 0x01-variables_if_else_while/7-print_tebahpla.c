#include <stdio.h>

/**
 * main - entry point.
 *
 * Description: prints the lowercase alphabet in reverse;
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}

	putchar(10);

	return (0);
}
