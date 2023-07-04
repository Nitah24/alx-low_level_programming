#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns pointerv to a 2-D array of strings
 * @width: with of array
 * @height: height of array
 * Return: pointer to 2-D array
 */

int **alloc_grid(int width, int height)
{
	int a, b, c, d;
	int **ptr;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = malloc(sizeof(int *) * height);

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		ptr[a] = malloc(sizeof(int) * width);

		if (ptr[a] == NULL)
		{
			for (b = a; b >= 0; b--)
			{
				free(ptr[b]);
			}
			free(ptr);
			return (NULL);
		}
	}
	for (c = 0; c < height; c++)
	{
		for (d = 0; d < width; d++)
		{
			ptr[c][d] = 0;
		}
	}
	return (ptr);
}
