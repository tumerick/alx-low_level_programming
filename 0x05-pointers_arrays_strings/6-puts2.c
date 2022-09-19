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
	int cnt = 0;

	while (str[cnt] != '\0')
	{
		if (cnt % 2 != 0)
			continue;
		_putchar(str[cnt++]);
	}

	_putchar(10);
}
