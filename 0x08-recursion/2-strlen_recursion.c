#include "main.h"

/**
 * _strlen_recursion-returns length of a string
 * @s: the string
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int str_length;

	if (*s == '\0')
	{
		return (0);
	}
	s++;
	str_length = _strlen_recursion(s) + 1;
	return (str_length);
}
