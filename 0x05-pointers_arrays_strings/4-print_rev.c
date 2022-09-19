#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * print_rev - prints a string in reverse
 *
 * @s: <char> string array to reverse
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i;

	for (i = strlen(s) - 1; i >= 0; i--)
	{
		printf("%s", s[i]);
	}

	printf("\n");
}
