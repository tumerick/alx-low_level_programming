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

int **alloc_grid(int width, int height)
{
	int **result;
	int i, j;

	if (width == 0 || height == 0)
		return (NULL);

	result = (int **) malloc(sizeof(int *) * height);

	if (result == NULL)
	{
		free(result);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		result[i] = (int *) malloc(sizeof(int) * width);

		if (result[i] == NULL)
		{
			while (i--)
				free(result[i]);
			free(result);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			result[i][j] = 0;
	}

	return (result);
}
