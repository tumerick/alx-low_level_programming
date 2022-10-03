#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings.
 *
 * @s1: string to concatenate
 * @s2: string to concaternate
 *
 * @Return: NULL | pointer to concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	int len = 0, idx;

	while (s1[len] || s2[len])
		len++;

	if (!(s1))
		s1 = "";

	if (!(s2))
		s2 = "";

	str = (char *) malloc(sizeof(char) * len;

	if (str == NULL)
		return (NULL);

	idx = 0
	while (*s1)
		str[idx++];

	while (*s2)
		str[idx++];

	return (str);
}
