#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid -  fonction returns a pointer
 * to a 2 dimensional array of integers.
 * @width: width  array.
 * @height: height  array.
 *
 * Return: pointer of an array of integers
 */
int **alloc_grid(int width, int height)
{
	int **foi;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	foi = malloc(height * sizeof(int *));
	if (foi == NULL)
	{
		free(foi);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		foi[i] = malloc(width * sizeof(int));
		if (foi[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(foi[i]);
			free(foi);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			foi[i][j] = 0;

	return (foi);
}
