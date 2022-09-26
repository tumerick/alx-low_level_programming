#include "main.h"

/**
 * _memcpy - copies `n` bytes from memory area `src`
 * to memory area `dest`
 *
 * @src: src memory area
 * @dest: destination memory area
 * @n: number of bytes to copy
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *tmp = src;

	while (n)
	{
		*dest++ = *tmp++;
		n--;
	}

	return (dest);
}
