#include "main.h"

/**
 * swap_int- swaps the values of two integers
 * @a: 1st integer
 * @b: second integer
 * Return: nothing
 */
void swap_int(int *a, int *b)
{

int swp  = *a;
*a = *b;
*b = swp;

return;

}
