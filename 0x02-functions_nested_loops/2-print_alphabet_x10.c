#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times.
 *
 * Description: prints the letters of the alphabet 10 times.
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char letter = 'a';

	for (; i <= 10; i++)
	{
		for (; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
	}
	_putchar(10);
}
