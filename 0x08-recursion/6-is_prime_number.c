#include "main.h"

/**
 * _is_prime - helper function for `is_prime_number`
 *
 * @n: opperand
 * @d: divisor
 *
 * Return: <int>
 */

int _is_prime(int n, int d)
{
	if (n % d == 0)
		return (0);
	
	if (n / 2 == d)
		return (1);

	return (_is_prime(n, d + 1));
}

/**
 * is_prime_number - recursively determines whether given 
 * number of type <int> is a prime number.
 *
 * @n: opperand
 *
 * Return: 1 || 0
 */

int is_prime_number(int n)
{
	if (n % 2 == 0 ||
	    n % 3 == 0 ||
	    n < 1)
		return (0);

	if (n == 2 || n == 3)
		return (1);

	return (_is_prime(n, 2));
}
