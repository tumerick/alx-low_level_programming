#include "main.h"

/**
 * print_sign - prints sign of number
 *
 * @n: type int
 *
 * Description: Function recieves @n and prints '+','0','-' if
 * the integer is positive, zero, or negative - respectively.
 *
 * Return: 1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}

	if (n < 0)
	{
		_putchar(45);
		return (-1);
	}

	_putchar(48);
	return (n);
}
