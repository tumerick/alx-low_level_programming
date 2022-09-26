#include "main.h"

/**
 * compare - returns true if `a` and `b` are the same
 *
 * @a: first string
 * @b: second string
 *
 * Return: true || false
 */

int compare(char *a, char *b)
{
	while (*a && *b)
	{
		if (*a != *b)
			return (0);

		a++;
		b++;
	}

	return (1);
}

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
	while (*haystack != '\0')
	{
		if ((*haystack == *needle) &&
		     compare(haystack, needle))
			return (haystack);

		haystack++;
	}

	return ('\0');
}
