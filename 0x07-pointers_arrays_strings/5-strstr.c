#include "main.h"

/**
* _strstr - finds the occurence of a substr `needle`
* in the string `haystack` the terminating null bytes (\0)
* are not compared.
* @haystack: <char> array
* @needle: substr to find in `haystack`
* Return: pointer to the beginning of the located substr
* otherwise returns NULL
*/

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (!(*needle))
		return (haystack);

	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			while (haystack[i] == needle[i])
			{
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			}
		}
		haystack++;
	}

	return ('\0');
}
