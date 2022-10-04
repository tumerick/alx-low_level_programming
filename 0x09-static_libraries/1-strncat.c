#include "main.h"

/**
 * _strncat - similar to _strcat except that it
 * uses at most `n` bytes from `src` and `src` does
 * not need to be null-terminated if it contains `n`
 * more bytes.
 *
 * @n: <int> number of characters to concat
 * @src: source <char> array
 * @dest: destination <char> array
 *
 * Return: pointer to `dest`
 */

char *_strncat(char *dest, char *src, int n)
{
	int cnt = 0;
	char *res = dest;

	while (*dest)
		dest++;

	while (cnt++ < n && *src)
		*dest++ = *src++;

	return (res);
}
