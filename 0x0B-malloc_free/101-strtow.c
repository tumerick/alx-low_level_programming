#include "main.h"
#include <stdlib.h>

/**
 * strtow - splits a string into individual words
 *
 * @str: string to split
 *
 * Return: NULL | pointer to an array of strings
 */

char **strtow(char *str)
{
	char **result, *tmp;
	int i = 0, j = 0, len = 0,
	    c = 0, words = 0, start, end;

	while (str[len])
		len++;

	if (len == 0)
		return (NULL);

	while (str[i])
	{
		if (str[i++] != ' ')
			words++;
	}

	result = (char **) malloc(sizeof(char *) * (words + 1));

	if (result == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));

				if (tmp == NULL)
					return (NULL);

				while (start < end)
					*tmp++ = str[start++];

				*tmp = '\0';
				result[j++] = tmp - c;
				c = 0;
			}

			continue;
		}

		if (c++ == 0)
			start = i;
	}

	result[j] = NULL;

	return (result);
}
