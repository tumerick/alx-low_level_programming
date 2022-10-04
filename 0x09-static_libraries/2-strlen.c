#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: <char>
 *
 * Return: <int> (Success);
 */

int _strlen(char *s)
{
	/*
	 * Found on the internet.
	 * The definition of the subscript operator []
	 * is that E1[E2] is identical to (*((E1)+(E2)))
	 *
	 * So the expression *str == str[0]
	 * or str[1] == *(str + 1)
	 * or *(++str + 0) == *++str
	 */


	char *t = s;

	while (*t)
		++t;

	return (t - s);
}
