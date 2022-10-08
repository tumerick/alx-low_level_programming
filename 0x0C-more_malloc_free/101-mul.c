#include "main.h"
#include <stdlib.h>

/**
 * print - prints a string followed by a new line,
 * @str: <str>
 * Return: void
*/
void print(char *str)
{
	while (*str++)
		_putchar(*str);
}

/**
 * _atoi - convert a string to an integer.
 * @s: char type string
 * Return: integer converted
 */

int _atoi(const char *s)
{
	int sign = 1;
	unsigned long int resp = 0, num, idx;

	for (num = 0; !(s[num] >= 48 && s[num] <= 57); num++)
		if (s[num] == '-')
			sign *= -1;

	for (idx = num; s[idx] >= 48 && s[idx] <= 57; idx++)
	{
		resp *= 10;
		resp += s[idx] - 48;
	}

	return (sign * resp);
}

/**
 * print_int - prints an integer.
 * @n: int
 * Return: 0
 */

void print_int(unsigned long int n)
{
	unsigned  long int div = 1, idx;

	for (idx = 0; n / div > 9; idx++, div *= 10)
		;
	for (; div >= 1; n %= div, div /= 10)
		_putchar('0' + (n / div));
}

/**
 * main - multiplies two numbers together, recieved from argv
 * @argc: int
 * @argv: list
 * Return: 0
 */

int main(int argc, char const *argv[])
{
	int x, y;
	(void)argc;

	if (argc < 3)
	{
		print("Error ");
		exit(98);
	}

	x = _atoi(argv[1]);
	y = _atoi(argv[2]);
	print_int(x * y);

	_putchar('\n');
	return (0);
}
