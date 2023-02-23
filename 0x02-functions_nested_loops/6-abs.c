#include "main.h"

/**
 * _abs- function to print absolute value
 * @c: value to be checked
 * Return: absolute value
 */
int _abs(int c)
{
if (c < 0)
{
	int abslt;

	abslt = c * -1;
	return (abslt);
}
else
{
	return (c);
}
}
