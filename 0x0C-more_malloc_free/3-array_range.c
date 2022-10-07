#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers from `min` to `max`
 *
 * @min: starting value <int>
 * @max: ending value <int>
 *
 * Return: NULL (Fail) || Pointer to array (Success)
 */

int *array_range(int min, int max)
{
	int *result, size, idx;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	result = malloc(sizeof(int) * size);

	if (result == NULL)
		return (NULL);

	for (idx = 0; idx < size; idx++)
		result[idx] = min++;

	return (result);
}
