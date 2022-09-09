#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry line.
 *
 * Description: prints the alphabet in lowercase only using `putchar`.
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	putchar('\n');

	return (0);
}
