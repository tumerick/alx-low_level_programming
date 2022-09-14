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
		return (fibonacci(n - 1) + fibonacci(n - 2));
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
	int n = 50;

	// Init an array of `n` elements.
	// a neat trick I found on the interweb.
	int cache[n] = {[0 ... n - 1] = -1 };

	cache[0] = 0;
	cache[1] = 1;

	for(int i = 0; i < n; i++)
	{
		printf("%d ", fibonacci(cache, n - 1));
	}
	printf("\n");
}
				

