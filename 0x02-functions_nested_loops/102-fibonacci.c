#include <stdio.h>
#include <stdlib.h>

/**
 * fibonacci - calculates the fibonacci sequence recursively.
 * (with memoization).
 *
 * @n: <int>
 * @cache: <int> array used for memoization.
 *
 * Return: fibonacci(n - 1) + fibonacci( n + 2 )
 */

int fibonacci(int *cache, int n)
{
	int result;

	if (cache[n] != -1)
	{
		return (cache[n]);
	}

	if (n < 2)
	{
		result = n;
	}

	else
	{
		result = (fibonacci(cache, n - 1) + fibonacci(cache, n - 2));
	}

	cache[n] = result;
	return (result);
}

/**
 * main - Entry line.
 *
 * Description: prints the fibonacci sequence.
 *
 * Return: Always (0)
 */

int main(void)
{
	int i;
	int n = 50;
	int cache[50];

	for (i = 0; i < n; i++)
	{
		cache[i] = -1;
	}

	cache[0] = 0;
	cache[1] = 1;

	fibonacci(cache, n - 1);

	for (i = 2; i <= n; i++)
	{
		if (i == 50)
		{
			printf("%d\n", cache[i]);
		}

		else
		{
			printf("%d, ", cache[i]);
		}
	}

	return (0);
}
