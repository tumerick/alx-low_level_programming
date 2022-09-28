#include "main.h"

/**
 * wildcmp - compares two strings together
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: 1 || 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0')
		return (*s1 == '\0');

	if (*s1 == *s2)
		return (*s1 != '\0' && wildcmp(s1 + 1, s2 + 1));

	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)));

	return (0);
}
