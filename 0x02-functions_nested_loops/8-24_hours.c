#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - prints each minute of a day
 *
 * Description: prints every minute in 24 hours
 *
 * Return: void
 */

void jack_bauer(void)
{
	int h = 0;
	int m = 0;

	while (h <= 23)
	{
		while (m <= 59)
		{
			printf("%02d:%02d\n", h, m);
			m++;
		}
		h++;
		m = 0;
	}
}
