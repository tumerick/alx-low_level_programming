#include "main.h"

/**
 * string_toupper - capitalizes a lowercase string.
 *
 * @s: <char> array
 * Return: <char> array
 */

char *string_toupper(char *s)
{
	int i = 0;

	for (; s[i]; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
	}

	return (s);
}
