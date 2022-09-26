#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers.
 *
 * @a: matric to print
 * @size: size of the of the matrix
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0, i = 0;

	for (; i < size; i++)
	{
		sum1 += a[i];
		sum2 += a[size - i - 1];
		a += size;
	}

	printf("%d, %d\n", sum1, sum2);
}
