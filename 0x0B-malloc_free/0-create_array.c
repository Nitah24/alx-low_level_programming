#include "main.h"
#include <stdlib.h>

/**
 * create_array - function to create an array
 * @size: the size of the array
 * @c: the array created?
 * Return: NULL if size is 0, pointer to array
 * or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int n;
	char *ptr;

	if (size == 0)
		return (NULL);

	ptr = malloc(size * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (n = 0; n < size; n++)
	{
		ptr[n] = c;
	}

	return (ptr);
}
