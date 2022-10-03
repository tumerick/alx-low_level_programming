#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings.
 *
 * @s1: string to concatenate
 * @s2: string to concaternate
 *
 * Return: NULL | pointer to concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	int len = 0;

	while (s1[len] || s2[len])
		len++;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	str = (char *) malloc(sizeof(char) * len);

	if (str == NULL)
		return (NULL);

	while (*s1)
		*str++ = *s1++;

	while (*s2)
		*str++ = *s2++;

	return (str);
}
