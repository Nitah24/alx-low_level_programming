#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - to return a sum
 * @a: first integer
 * @b: 2nd integer
 * Return: a + b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - to subtract numbers
 * @a: first integer
 * @b: 2nd integer
 * Return: a - b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - to multiply numbers
 * @a: first integer
 * @b: 2nd integer
 * Return: a * b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - to divide numbers
 * @a: first integer
 * @b: 2nd integer
 * Return: a / b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - to find the modulus
 * @a: first integer
 * @b: 2nd integer
 * Return: a % b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
