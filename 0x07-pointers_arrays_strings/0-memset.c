#include "main.h"

/**
 * _memset - fills the first `n` bytes of the memory pointed
 * to by `s` with the constant byte `b`.
 *
 * @s: <char>
 * pointer to the destination object.
 *
 * @b: <char> value to be filled
 *
 * @n: <unsigned int>
 * number of nytes to be filled.
 *
 * Return: <char>
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n--)
		*s++ = b;
	return (s);
}
