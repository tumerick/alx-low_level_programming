#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * seperators of words:
 * space, tab, '\n', ',',';','.','!','?'
 * '"', '(', ')', '{', '}'.
 *
 * @s: <char> array
 *
 * Return: <char> array
 */

char *cap_string(char *s)
{
	int i = 0, j = 0;
	char sep[] = {',', '.', ';', '(', ')',
		' ', '{', '}', '\n', '\t',
		'"', '!', '?'};

	while (s[i++] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			j = 0;

			while (j++ < 13)
			{
				if (s[i - 1] == sep[j])
				{
					s[i] -= 32;
					break;
				}
			}
		}
	}

	return (s);
}
