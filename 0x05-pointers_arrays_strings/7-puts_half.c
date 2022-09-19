#include "main.h"

/**
 * puts_half - prints the second half of a string
 *
 * @str: <char> array.
 *
 * Return: void
 */

void puts_half(char *str)
{
	int full_length = _strlen(str) - 1;
	int half_length = full_length / 2;

	while (half_length <= full_length)
	{
		_putchar(str[half_length]);
	}
	_putchar(10);
}
