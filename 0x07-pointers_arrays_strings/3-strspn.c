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
	unsigned int cnt = 0;
	char *tmp = accept;

	while (*s++)
	{
		while (*accept++)
		{
			if (*(s - 1) == *(accept - 1))
			{
				cnt++;
				break;
			}

			if (!(*--accept))
				break;

			accept = tmp;
		}
	}

	return (cnt);
}
