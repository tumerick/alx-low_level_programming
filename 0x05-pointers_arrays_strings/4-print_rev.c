#include "main.h"
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
	char *t = s;
	
	/*
	 * if s == 'Hello'
	 * *t = s == s[0] == 72;
	 * t++ == s[1] == 101;
	 * t++ == s[2] == 108;
	 * and so on...
	 *
	 *
	 */
	while (*t)
		t++;

	t--;

	while (*t > *s)
	{
		_putchar(*t);
		t--;
	}
	_putchar(10);
}
