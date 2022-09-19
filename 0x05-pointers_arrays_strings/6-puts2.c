#include "main.h"

/**
 * puts2 - prints every other character of a given string
 * starting with the first character.
 *
 * @str: <char> array
 *
 * Return: void
 */

void puts2(char *str)
{
	int cntr = 0;

	while (*str)
	{
		str++;
		if (cntr % 2 != 0)
			continue;
		_putchar(*str);
		cntr++;
	}
	_putchar(10);
}
