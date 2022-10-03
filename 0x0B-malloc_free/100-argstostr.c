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
	int i, j, idx, len = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		for (j = 0; av[i][j]; j++)
			len++;

	result = malloc(sizeof(char) * len + 1);

	if (result == NULL)
		return (NULL);

	idx = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			result[idx++] = av[i][j];

		result[idx++] = '\n';
	}

	result[len] = '\0';

	return (result);
}
