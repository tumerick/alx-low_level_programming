#include "main.h"

/**
 * _strpbrk - searches for a set of bytes within `s`
 *
 * @s: string to be searched
 * @accept: substr to find in `s`
 *
 * Return: pointer to byte in `s` that matches bytes in `accept`
 * otherwise returns NULL if none found.
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		while (*accept)
		{
			if (*s == *accept)
			{
				return (s);
			}
			accept++;
		}
		s++;
	}

	return ('\0');
}
