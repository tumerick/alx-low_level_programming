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
	int len = strlen(s), i = len - 1, j = 0;
	char output[i];

	for (i = i - 1; i >= 0; i--)
	{
		output[j] = s[i];
		j++;
	}

	printf("%s\n", output[j]);
}
