#include <stdio.h>

/**
 * main - entry line.
 *
 * Description: prints the lowercase alphabet followerd by the
 * uppercase alphabet.
 *
 * Return: 0 (success)
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}

	putchar('\n');

	return (0);
}
