#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory of the size of a given <int> value.
 *
 * @b: <int>
 *
 * Return: 98 || *pointer
 */

void *malloc_checked(unsigned int b)
{
	void *res = malloc(b);

	if (res == NULL)
		exit(98);

	return (res);
}
