#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments of a function
 * to a string
 *
 * @ac: length of arguments
 * @av: arguments
 *
 * Return: NULL | pointer to string
 */

char *argstostr(int ac, char **av)
{
	char *result;
	int len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (**av)
		while (*av)
			len++;

	result = (char *) malloc(sizeof(char) * ac);

	if (result == NULL)
		return (NULL);

	while (**av)
	{
		while (*av)
			*str++ = *av;

		*str++ = '\n';
	}

	return (str);
}
