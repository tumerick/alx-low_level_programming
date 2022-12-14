#include "main.h"

/**
 * _strlen - recursively finds the length of a given string.
 *
 * @str: string
 *
 * Return: <int> length
 */

int _strlen(char *str)
{
	int length = 0;

	if (*(str + length))
	{
		length++;
		length += _strlen(str + length);
	}

	return (length);
}

/**
 * _is_palindrome - recursive helper function for `is_palindrome`
 *
 * @str: string
 * @len: length of string
 * @idx: current index of string
 *
 * Return: 1 || 0
 */

int _is_palindrome(char *str, int len, int idx)
{
	if (*(str + idx) != *(str + len - 1))
		return (0);

	if (idx >= len)
		return (1);

	return (_is_palindrome(str, len - 1, idx + 1));
}

/**
 * is_palindrome - recursively determines whether or not a string
 * is a palindrome.
 *
 * @s: pointer to string (<char> array)
 *
 * Return: 1 || 0
 */

int is_palindrome(char *s)
{
	if (!(*s))
		return (0);

	return (_is_palindrome(s, _strlen(s), 0));
}
