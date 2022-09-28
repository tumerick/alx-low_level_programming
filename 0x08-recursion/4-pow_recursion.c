#include "main.h"

/**
 * _pow_recursion - recursively finds the value of `x` raised 
 * to the power `y`
 *
 * @x: base number
 * @y: exponent
 *
 * Return: <int>
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1);
}
