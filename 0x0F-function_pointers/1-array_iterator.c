#include "function_pointers.h"
/**
 * array_iterator - calls a function on each el of an <array>
 *
 * @array: <array>
 * @size: <int> length of the array
 * @action: function to be called
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (!array || !action)
		return;

	while (size--)
		action(*array++);

}
