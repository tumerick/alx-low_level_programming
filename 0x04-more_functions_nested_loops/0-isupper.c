#include "main.h"

/**
 * _isupper - determines if input string is uppercase.
 * Return: 1 (success)
 */

int _isupper(int c);
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
