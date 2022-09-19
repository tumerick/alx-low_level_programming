#include "main.h"
#include <string.h>

/**
 * rev_string - given a point to a string
 * reverses that string in place.
 *
 * @s: <char> pointer
 *
 * Return: void
 */

void rev_str(char *s)
{
	char fir, end;

	int len = strlen(s);
	int mid = len / 2;
	int max = len - 1;

	while (mid >= 0)
	{
		fir = s[max - mid];
		end = s[mid];
		s[mid] = fir;
		s[max - mid] = end;
		mid--;
	}
}
