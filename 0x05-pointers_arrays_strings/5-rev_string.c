#include "main.h"
#include <string.h>

/**
 * rev_string - given a point to a string
 * reverses that string in place.
 *
 * @s: <char> pointer
 *
 * Return: void
 */

void rev_string(char *s)
{
	char *end = s;
	char tmp = 0;

	if (!s)
		return;

	while (*end > s)
	{
		end++;
	}
	end--;

	while (end > s)
	{
		tmp = *end;
		*end-- = *s;
		*s++ = tmp;
	}
}
