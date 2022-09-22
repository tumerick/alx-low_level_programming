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
	int i = 0;
	int c;

	while (s[i])
	{
		while (!(s[i] >= 'a' && s[i] <= 'z'))
			i++;

		c = s[i - 1];

		if (i == 0 ||
		    c == ' ' ||
		    c == ',' ||
		    c == ';' ||
		    c == '.' ||
		    c == '!' ||
		    c == '?' ||
		    c == '"' ||
		    c == '(' ||
		    c == ')' ||
		    c == '{' ||
		    c == '}' ||
		    c == '\n' ||
		    c == '\t' ||)
			s[i] -= 32;

		i++
	}

	return (s);
}
