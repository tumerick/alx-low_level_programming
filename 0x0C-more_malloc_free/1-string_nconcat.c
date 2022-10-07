#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * returns a pointer to the allocated space in memory which contains
 * `s1` followed by the first `n` bytes of `s2`
 *
 * @s1: <string>
 * @s2: <string>
 * @n: <int>
 *
 * Return: NULL (Fail) | *Pointer (Success)
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;

	unsigned int len = n, idx;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (idx = 0; s1[idx]; idx++)
		len++;

	result = malloc(sizeof(char) * (len + 1));

	if (result == NULL)
		return (NULL);

	len = 0;

	for (idx = 0; s1[idx]; idx++)
		result[len++] = s1[idx];

	for (idx = 0; s2[idx] && idx < n; idx++)
		result[len++] = s2[idx];

	result[len] = '\0';

	return (result);
}
