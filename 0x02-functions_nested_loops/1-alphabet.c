#include "main.h"

/**
 * main - Entry point
 *
 * Description: Prints the letters of the alphabet.
 *
 * Return: void
 */

void print_alphabet(void)
{
	char i = 'a';

	for (; i <= 'z'; i++)
	{
		_putchar(i);
	}

	_putchar(10);
}
