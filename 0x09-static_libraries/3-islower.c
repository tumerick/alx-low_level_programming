#include "main.h"
#include <ctype.h>

/**
 * _islower - check for ascii_lowercase
 * @c: type int
 *
 * Description: check @c for ascii_lowercase value.
 *
 * Return: 1 if input is lowercase letter
 *
 * Error: 0 input is not lowercase letter
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	return (0);
}
