#include <stdio.h>
#include <stdlib.h>

/**
 * fibonacci - calculates the fibonacci sequence recursively 
 * (with memoization).
 * 
 * @n: <int>
 *
 * Return: fibonacci(n - 1) + fibonacci( n + 2 )
 */

int fibonacci(int *cache, int n)
{
	if (cache[n] == -1)
	{
		return (fibonacci(cache, n - 1) + fibonacci(cache, n - 2));
	}

	return (cache[n]);
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
	int cache[n];

	for (i = 0; i < n; i++)
	{
		cache[i] = -1;
	}

	cache[0] = 0;
	cache[1] = 1;

	fibonacci(cache, n - 1);

	for(i = 0; i <= n; i++)
	{
		if (n == 50)
		{
			printf("%d\n", cache[i]);
		}

		else
		{
			printf("%d, ", cache[i]);
		}
	}
}
				
