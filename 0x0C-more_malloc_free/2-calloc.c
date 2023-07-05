#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: number of bytes
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int a = 0, b = 0;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	b = nmemb * size;
	ptr = malloc(b);

	if  (ptr == NULL)
		return (NULL);

	while (a < b)
	{
		ptr[a] = 0;
		a++;
	}
	return (ptr);
}
