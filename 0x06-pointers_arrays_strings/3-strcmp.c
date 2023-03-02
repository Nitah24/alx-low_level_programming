#include "main.h"

/**
 * _strcmp-compare two strings
 * @s1: sting to compare
 * @s2: second string
 * Return: the compared value
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
