#include "main.h"

/**
 * string_toupper - capitalizes a lowercase string.
 *
 * Return: <char> array
 */

char *string_toupper(char *str)
{
	int i = 0;
	
	for (; str[i]; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
	}

	return (str);
}
