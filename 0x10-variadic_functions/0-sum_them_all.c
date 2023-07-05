#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns sum of all its parameters
 * @n: parameters
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list par;
	unsigned int j, result = 0;

	va_start(par, n);

	for (j = 0; j < n; j++)
		result += va_arg(par, int);
	va_end(par);

	return (result);
}
