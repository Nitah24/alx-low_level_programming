#include "main.h"

/**
 * _islower - returns 1 if c is lowercase
 * @c: parameter to check
 * Return: 1 for lowercase and 0 for other
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
