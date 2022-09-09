#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/**
 * main - <int> n is assigned a random value each execution.
 *
 * Description: prints the last digit stored in the value <int> n
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int n, digit;
	char str[30];

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	digit = n % 10;

	if (digit == 0)
	{
		strcpy(str, "and is 0");
	}

	if (digit > 5)
	{
		strcpy(str, "and is greater than 5");
	}

	if (digit < 6)
	{
		strcpy(str, "and is less than 6 and not 0");
	}


	printf("Last digit of %d is %d %s\n", n, digit, str);

	return (0);
}
