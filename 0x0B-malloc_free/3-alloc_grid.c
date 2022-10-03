#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a
 * 2D array of integers.
 *
 * @width: width of 2D array
 * @height: height of 2D array
 *
 * Return: NULL | pointer to array
 */

int **aloc_grid(int width, int height)
{
	int **result;
	int i, j;

	if (!(width) || !(height))
		return (NULL);

	result = (int **) malloc(sizeof(int) * height);

	if (result == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		result[i] = (int *) malloc(sizeof(int) * width);

		if (result[i] == NULL)
			return (NULL);

		**result[i][j] = 0;
	}

	return (result);
}
