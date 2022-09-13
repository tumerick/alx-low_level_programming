#include "main.h"
#include <string.h>

/**
 *
 * main - entry line
 *
 * Description: prints "_putchar"
 *
 * Return: 0 (Success)
 *
 */

int main(void)
{

	char *s = "_putchar";
	int i = 0;
	int l = strlen(s);

	for (; i < l; i++)
	{
		_putchar(s[i]);
	}

	_putchar(10);

	return (0);
}
