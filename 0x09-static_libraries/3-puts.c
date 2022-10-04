#include "main.h"

/**
 * main - Entry point
 *
 * Description: prints "Programming is like building a multilingual puzzle"
 *
 * Return: Always 0 (Success)
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
