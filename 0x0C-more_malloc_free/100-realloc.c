#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: size in bytes of allocated space for ptr
 * @new_size: size in bytes of the allocated block
 *
 * Return: ptr or NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int j;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		p = malloc(new_size);

		if (p == NULL)
			return (NULL);
		return (p);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}
	p = malloc(new_size);

	if (p == NULL)
		return (NULL);

	for (j = 0; j < old_size && j < new_size; j++)
	{
		p[j] = ((char *) ptr)[j];
	}

	free(ptr);
	return (p);
}
