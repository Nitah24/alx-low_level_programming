#include "main.h"

/**
 * _isdigit- cheks if a character is a digit
 * @c: number to be checked
 * Return: 1 if digit and 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
