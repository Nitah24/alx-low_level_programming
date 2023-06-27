#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - iterates arrays
 * @action: pointer to function to be used
 * @array: the array to be iterated
 * @size: size of array
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i, s = size;

	for (i = 0; i < s; i++)
	{
		action(array[i]);
	}
}
