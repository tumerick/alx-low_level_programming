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
	while (*src)
		dest[src++];
	return (dest);
}
