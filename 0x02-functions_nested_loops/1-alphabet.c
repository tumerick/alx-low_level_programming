#include "main.h"

/**
 * main - entry line
 *
 * Description: prints the letters of the alphabet
 *
 * Return: 0 (Success)
 *
 */

int main(void)
{
	char i = 'a';

	for (; i <= 'z'; i++)
	{
		_putchar(i);
	}

	_putchar(10);

	return (0);
}
