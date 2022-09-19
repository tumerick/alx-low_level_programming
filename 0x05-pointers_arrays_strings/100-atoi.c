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
	int sign;
	unsigned int value = 0;

	while (isdigit(*s))
	{
		if (*s == ' ')
			continue;

		if (*s == '+' || *s == '-')
		{
			sign = 1 - 2 * (*s++ == '-');
			continue;
		}

		value *= 10;
		value += (int) (*s - '0');
		s++;
	}

	return (value * sign);
}
