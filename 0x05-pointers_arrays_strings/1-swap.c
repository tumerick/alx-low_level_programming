#include "main.h"

/**
 * swap_int - swaps two given <int> values.
 *
 * @a: <int>
 * @b: <int>
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
}
