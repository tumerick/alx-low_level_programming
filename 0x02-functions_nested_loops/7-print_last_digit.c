#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - prints last number of recieved int
 *
 * @n: recieved number of type <int>
 *
 * Description: prints the last number of the recieved int
 *
 * Return: @n (Success)
 */

int print_last_digit(int n)
{
	n = n >= 0 ? n : n + -1;

	int end = n % 10;

	_putchar(end + '0');

	return (end);
}
