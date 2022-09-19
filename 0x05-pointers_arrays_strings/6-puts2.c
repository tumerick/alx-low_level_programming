#include "main.h"

/**
 * puts2 - prints every other character of a given string
 * starting with the first character.
 *
 * Return: void
 */

void puts2(char *str)
{
	int cntr = 0;

	while (*str)
	{
		if (cntr % 2 != 0)
			continue;
		_putchar(*str++);
	}
	_putchar(10);
}
