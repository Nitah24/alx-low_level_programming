#include "main.h"
#include <stdio.h>

/**
 * _strpbrk -searches a string for any set of bytes
 * @s: first string
 * @accept: 2nd string
 * Return: pointer to occurances
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + );
			}
		}
	}
	return (NULL);
}
