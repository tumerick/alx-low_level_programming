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
	while (*s++ != '\0')
	{
		if (*s == c)
			return (s);
	}

	return ('\0');
}
