#include "main.h"

/**
 * _strlen_recursion - recursively determines length of string
 *
 * @s: input string of which length is to be found
 *
 * Return: <int>
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}

	return (len);
}
