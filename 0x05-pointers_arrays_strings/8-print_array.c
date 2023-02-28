#include "main.h"
#include <stdio.h>

/**
 * print_array-prints the ne elements of an array
 * @a: array?
 * @n: number of elements of array
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
	if (i != (n - 1))
	{
		printf(", ");
	}
	}
	printf("\n");
}
