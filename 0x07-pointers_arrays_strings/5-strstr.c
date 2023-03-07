#include "main.h"
#include <stdio.h>

/**
 * _strstr-locates a substring
 * @haystack: string to search
 * @needle: string to find
 * Return: ponter to needle
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[0])
			{
				return (haystack + i);
			}
		}
	}
	return (NULL);
}
