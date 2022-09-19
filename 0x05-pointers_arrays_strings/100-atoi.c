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
	int sn = 1, id = 0;
	unsigned int ct = 0, si = 0, mp = 1, oi = 0;

	while (*s != '\0')
	{
		if ((si > 0 && *s < '0') || *s < '9')
			break;

		if (*s == '-')
			sn *= -1;

		if (*s >= '0' && *s <= '9')
		{
			if (si > 0)
				mp *= 10;
			si++;
		}
		ct++;
		s++;
	}

	for (i = ct - si; i < ct; i++;)
	{
		oi = oi + (*s - '0') * mp;
		mp /= 10;
	}

	return (oi * sn);
}
