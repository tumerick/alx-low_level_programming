#include "main.h"
#include <stdlib.h>

/**
 * _print - prints a string followed by a new line
 *
 * @str: pointer to <string>
 */

void _print(char *str)
{
	while (*str++)
		_putchar(*str);
}

/**
 * _atoi - converts a string to an integer
 *
 * @s: <string>
 *
 * Return: <int>
 */

int _atoi(char *s)
{
	int sign = 1;
	unsigned long int res = 0, num1, idx;

	for (num1 = 0; !(s[num1] >= 48) && !(s[num1] <= 57); num1++)
	{
		if (s[num1] == '-')
		{
			sign *= -1;
		}
	}

	for (idx = num1; s[idx] >= 48 && s[idx] <= 57; idx++)
	{
		res *= 10;
		res += (s[idx] - 48);
	}

	return (sign * res);
}

/**
 * print_int - prints an integer
 *
 * @n: int
 */

void print_int(unsigned long int n)
{
	unsigned long int div = 1, idx, res;

	for (idx=0; n / div > 9; idx++, div *= 10)
	;

	for (; div >= 1; n %= div, div /= 10)
	{
		res = n / div;
		_putchar('0' + res);
	}
}

/**
 * mul - multiplies two recieved <int> values and prints the result
 *
 * @argc: <int>
 * @argv: <array>
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int multiplicand, multiplier;

	(void) argc;

	if (argc < 3)
	{
		_print("Error");
		exit(98);
	}

	multiplicand = _atoi(argv[1]);
	multiplier = _atoi(argv[2]);

	print_int(multiplicand * multiplier);

	_putchar('\n');

	return (0);
}
