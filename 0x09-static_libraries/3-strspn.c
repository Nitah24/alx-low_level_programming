#include "main.h"

/**
 * _strspn-gets the length of a prefix substring
 * @s: string
 * @accept: another string
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, n, value;

	value = 0;

	for (i = 0; s[i]; i++)
	{
		for (n = 0; accept[n]; n++)
		{
			if (s[i] == accept[n])
			{
				value++;
				break;
			}
			else if (accept[n + 1] == '\0')
				return (value);
		}
	}
	return (value);
}
