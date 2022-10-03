#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * and initializes it with a specific char `c`.
 *
 * @size: size of array
 * @c: specific char
 *
 * Return: NULL | pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size <= 0)
		return (NULL);

	arr = (char *) malloc(sizeof(char) * size);

	i = 0;
	while (i < size)
	{
		arr[i] = c;
		i++;
	}

	return (arr);
}
