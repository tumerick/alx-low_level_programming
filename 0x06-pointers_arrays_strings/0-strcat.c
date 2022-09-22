#include "main.h"
#include <stdio.h>
/**
 * _strcat - appends the `src` string to the `dest string.
 *
 * @src: `src` <char> array
 * @dest: `dest` <char> array
 *
 * @Return: concatented <char> array
 */

char *_strcat(char *dest, char *src)
{
	char *res = dest;

	while (*dest != '\0')
		dest++;

	while ((*dest++ = *src++));

	return (res);
}
