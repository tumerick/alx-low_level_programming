#include "main.h"

/**
 * _sqrt - helper function for _sqrt_recursion
 *
 * @n: radicand
 * @i: index
 *
 * Return: <int>
 */

int _sqrt(int n, int i)
{
	int root = i * i;

	if (root == n)
		return (root);

	if (root == n / 2)
		return (-1);

	return (_sqrt(n, root + 1));
}

/**
 * _sqrt_recursion - recursively determines the square root of
 * a given number of type <int>
 *
 * @n: <int>
 *
 * Return: <int>
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
