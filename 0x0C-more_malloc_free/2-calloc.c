#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array of `nmemb` elements of `size`
 * and returns a pointer to the allocated memory.
 *
 * @nmemb: <int>
 * @size: <int>
 *
 * Return: NULL (Fail) || Pointer to allocated memory (Success)
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int total = nmemb * size;
	void *result;

	if (nmemb == 0 || size == 0)
		return (NULL);

	result = malloc(total);

	if (result == NULL)
		return (NULL);

	return (result);
}
