#include "main.h"
#include <stdio.h>

/**
 * print_array - prints an array of length n
 * seperates each element of the array with a comma
 * does not change the order of the elements in the array.
 *
 * @a: <int> array
 * @n: length of <int> array
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
		printf("%d", a[i++]);
}
