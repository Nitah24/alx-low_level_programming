#include "main.h"
#include <stdlib.h>

/**
 * array_range - contains values from min to max
 * @min: minnimum value
 * @max: maximum
 * Return: pointer to newly created array
 */

int *array_range(int min, int max)
{
	int *ptr, j = 0;

	if (min > max)
		return (NULL);

	ptr = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (ptr == NULL)
		return (NULL);

	while (min <= max)
	{
		ptr[j] = min;
		j++;
		min++;
	}
	return (ptr);
}
