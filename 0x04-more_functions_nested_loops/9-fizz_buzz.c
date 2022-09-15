#include <stdio.h>

/**
 * main - prints the numbers 1 to 100.
 * for every multiple of 3 or 5 prints Fizz || Buzz
 * for every multiple of 3 and 5 prints FizzBuzz
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");

		else if (i % 3 == 0 && i % 5 != 0)
			printf("Fizz");

		else if (i % 5 == 0 && i % 3 != 0)
			printf("Buzz");

		else
			printf("%d", i);

		if (i == 100)
			printf("\n");
		else
			printf(" ");
	}
	return (0);
}
