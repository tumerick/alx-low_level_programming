#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string in reverse
 *
 * @s: <char> string array to reverse
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i = strlen(*s) - 1;

	while(i >= 0)
	{
		printf("%s", s[i]);
	}
}
