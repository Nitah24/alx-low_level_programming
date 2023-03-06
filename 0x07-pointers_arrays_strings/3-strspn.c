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

	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (accept[n] == s[i])
			{
				value++;
			}
		}
	}
	n = 0;
	return (value);
}
