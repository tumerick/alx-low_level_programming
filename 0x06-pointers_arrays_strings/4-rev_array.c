#include "main.h"

/**
 * reverse_array - reverses the elements of
 * an array of integers
 *
 * @a: <int> array
 * @n: <int> num of elements to swap.
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0, j = n - 1, tmp;

	for (; i < j; i++, j--)
	{
		tmp = *(a + i);
		*(a + i) = *(a + j);
		*(a + j) = tmp;
	}
}
