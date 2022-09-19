#include "main.h"
#include <ctype.h>
/**
 * _atoi - converts a string to an integer
 *
 * @s: <char> array to convert.
 *
 * Return: <int> (Success)
 */

int _atoi(char *s)
{
	unsigned int value = 0;
	int sign = 1;

	while (*s == ' ')
		s++;

	if (*s == '+' || *s == '-')
		sign = 1 - 2 * (*s == '-');

	while (isdigit(*s))
	{
		value *= 10;
		value += (int) (*s - '0');
		s++;
	}

	return (value * sign);
}
