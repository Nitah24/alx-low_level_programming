#include "main.h"

/**
 * create_array - function to create an array
 * @size: the size of the array
 * @c: the array created?
 * Return: NULL if size is 0, pointer to array
 * or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	int n;
	char *ptr;

	ptr = malloc(size * sizeof(char))
	if (size == 0)
	{
		return (NULL);
	}
	for (n = 0; n < size; n++)
	{
		ptr[n] = n + 1;
	}
	if (ptr == NULL)
	{
		return (NULL);
	}

	return (ptr);
}
