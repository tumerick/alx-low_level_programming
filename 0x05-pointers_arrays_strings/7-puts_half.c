#include "main.h"
#include <string.h>

/**
 * puts_half - prints the second half of a string
 *
 * @str: <char> array.
 *
 * Return: void
 */

void puts_half(char *str)
{
	int f_len = 0, h_len;

	while (*str)
		f_len++;
	f_len--;

	if (f_len % 2 == 0)
		h_len = count / 2;
	else
		h_len = (count - 1) / 2;

	while (half_length < full_length)
	{
		_putchar(str[++half_length]);
	}
	_putchar(10);
}
