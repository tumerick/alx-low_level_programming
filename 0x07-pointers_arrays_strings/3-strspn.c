#include "main.h"

/**
 * _strspn - finds the length of a prefix substring
 *
 * @s: <char> array
 * @accept: substring to find.
 *
 * Return: length of `accept` substr
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count, i, j;

	count = 0;

	for (i = 0; accept[i]; i++)
	{
		for (j = 0; s[j] != ' '; j++)
		{
			if (accept[i] == s[j])
			{
				count++;
			}
		}
	}

	return (count);
}
