#include "main.h"

/**
 * _strncpy - Function that copies a string.
 *
 * @src: source of the string to be copied
 * @dest: buffer for the copied string
 * @n: number of bytes to be copied.
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *res = dest;
	int cnt = 0;

	while (cnt++ < n && *src)
		*dest++ = *src++;

	return (res);
}
