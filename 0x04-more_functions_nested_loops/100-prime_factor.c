#include <stdio.h>
#include <math.h>

/**
 * _sqrt - finds the square root of a given integer
 *
 * @n: <double>
 *
 * Return: <double>
 */

double _sqrt(double n)
{
	float sqrt = n / 2, x = 0;

	while (sqrt != x)
	{
		x = sqrt;
		sqrt = (n / x + x) / 2;
	}

	return (sqrt);
}

/**
 * main - prints the largest prime factor of 612852475143
 *
 * Return: 0
 */

int main(void)
{
	long int num = 612852475143;
	int i, l;

	while (num % 2 == 0)
	{
		num = num / 2;
	}

	for (i = 3; i <= _sqrt(num); i += 2)
	{
		while (num % i == 0)
		{
			num = num / i;
			l = i;
		}
	}

	if (num > 2)
		l = num;

	printf("%d\n", l);

	return (0);
}
