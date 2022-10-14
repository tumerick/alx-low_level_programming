#include "function_pointers.h"

/**
 * int_index - searches for an integer
 *
 * @array: <array> to search
 * @size: <int> length of `array`
 * @cmp: function pointer to compare values
 * 
 * Return: -1 (Not found or size <= 0) || array[i]
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int idx = 0;

	if (!array || !cmp)
		return (-1);

	for (; idx < size; idx++)
		if (cmp(array[idx]))
			return (idx);

	return (-1);
}
