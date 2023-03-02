#include "main.h"

/**
 * reverse_array-reverses content of array
 * @a: the array
 * @n: number of elements
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int temp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		temp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = temp;
	}
}
