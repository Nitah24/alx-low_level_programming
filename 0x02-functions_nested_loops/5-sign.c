#include "main.h"

/**
 * print_sign - printing the sign of a number
 * @n: number to check
 * Return: 1 if greater than 0, 0 if 0 and -1 if less than 0
 */
int print_sign(int n)
{
if (n > 0)
{
	_putchar(43);
	return (1);
}
else if (n < 0)
{
	_putchar(45);
	return (-1);
}
else
{
	_putchar(48);
	return (0);
}
}
