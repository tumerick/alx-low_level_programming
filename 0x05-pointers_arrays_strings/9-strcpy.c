#include "main.h"

/**
 * strcpy - copies a string 
 * from <char> src to <char> dest
 *
 * @src: <char> array
 * @dest: <char> array
 *
 * Return: 0
 */

char *_strcpy(char *dest, char *src)
{
	int cnt = 0;

	while (src[cnt] != '\0')
		dest[cnt] = *(src + i);
	dest[i] = '\0';

	return (dest);
}
