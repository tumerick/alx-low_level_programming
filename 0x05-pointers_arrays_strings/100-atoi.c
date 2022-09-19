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
	int sign = 1;
	unsigned int result = 0;

	while (*s++)
	{
		if (s* == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			result = (result * 10) + (*s - '0');
		else if (result > 0)
			break;
	}

	return (result * sign);
}
