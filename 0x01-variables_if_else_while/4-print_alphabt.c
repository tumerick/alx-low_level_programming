#include <stdio.h>

/**
 * main - entry line.
 *
 * Description: prints all lowercase letters except 'q' and 'e'.
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'q' || ch == 'e')
			continue;

		putchar(ch);
	}

	putchar('\n');

	return (0);
}
