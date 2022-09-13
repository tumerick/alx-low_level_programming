#include "main.h"

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
	return (_abs(n) % 10);
}
