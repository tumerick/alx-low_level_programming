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

	while (h_len < f_len)
	{
		_putchar(str[++h_len]);
	}
	_putchar(10);
}
