#include "main.h"
#include <stdio.h>

/**
 * _strchr-locates a character in a string
 * @s:string to check
 * @c: character to be located
 * Return: pointer to c occurance or NULL
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (NULL);
}
