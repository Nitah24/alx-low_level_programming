#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - function that searches for an integer
 * @array: array to be searched
 * @size: size of array
 * @cmp: pointer to function to be executed
 * Return: index of first index for which
 * cmp does not return 0 else -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			for (i = 0; i < size; i++)
			{
				if (cmp(array[i]))
				{
					return (i);
				}
			}
		}
	}
	else
	{
		return (-1);
	}
	return (0);
}
