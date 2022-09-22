#include "main.h"

/**
 * leet - converts a string into "leet" speak.
 * @s: string to be converted.
 * Return: 1337ed string.
 */

char *leet(char *s)
{
	int i;
	char table[] = {'4', '3', '1', '0', '7'};
	char upper[] = {'A', 'E', 'I', 'O', 'T'};
	char lower[] = {'a', 'e', 'i', 'o', 't'};

	while (*s != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*s == upper[i] || *s == lower[i])
				*s = table[i];
		}
		s++;
	}

	return (s);
}
