#include "main.h"

/**
 * _isalpha - checks for alphaneumeric
 * @c: type int
 *
 * Description: checks if input is an alphaneumeric character
 *
 * Return: 1 (Success); 0 (Not Successful)
 */

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
	{
		return (1);
	}

	/* falsy */
	return (0);
}
