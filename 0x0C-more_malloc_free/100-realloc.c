#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using `malloc` and `free`
 *
 * @ptr: pointer to the memory previously assigned
 * @old_size: space allocated for `ptr`
 * @new_size: newly appointed size for `ptr`
 *
 * Return: NULL if the `new_size` is equal to zero ||
 * `malloc(new_size)` if `ptr` is NULL ||
 * `ptr` if `new_size` == `old_size`
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *result;
	char *_ptr, *other;
	unsigned int idx;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		result = malloc(new_size);

		if (result == NULL)
			return (NULL);

		return (result);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	_ptr = ptr;
	result = malloc(sizeof(_ptr) * new_size);

	if (result == NULL)
	{
		free(ptr);
		return (NULL);
	}

	other = result;

	for (idx = 0; idx < old_size && idx < new_size; idx++)
		other[idx] = *_ptr++;

	free(ptr);

	return (result);
}
