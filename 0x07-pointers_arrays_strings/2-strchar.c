#include "main.h"

/**
 * _strchr - locates a character in a string.
 *
 * @s: provided string
 * @c: character to look for
 *
 * Return: pointer to the first occurence of `c`.
 * otherwise returns NULL.
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s + i);
	}

	return ('\0');
}
