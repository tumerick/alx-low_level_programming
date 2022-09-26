#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 *
 * @s: pointer to string
 * @to: <char> pointer to change
 *
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
