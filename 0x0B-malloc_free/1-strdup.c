#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - newly allocates a space in memory
 * containing the string `str`.
 *
 * @str: string to be assigned to the new memory block
 *
 * Return: NULL | pointer to duplicate `str`
 */

char *_strdup(char *str)
{
	int len = 0;
	char *s;
	char *p;

	while (str[len])
		len++;

	s = (char *) malloc(len + 1);
	p = s;

	while (*str)
		*p++ = *str++;

	*p = '\0';

	return (s);
}
