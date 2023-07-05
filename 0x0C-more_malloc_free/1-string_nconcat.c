#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenate two strings
 * @s1: first string
 * @s2: 2nd string
 * @n: bytes of data
 * Return: a poinyter newly allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a = 0, b = 0, c = 0, d = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[a])
		a++;
	while (s2[c])
		c++;

	if (n >= c)
		d = a + c;
	else
		d = a + n;
	ptr = malloc(sizeof(char) * d + 1);
	if (ptr == NULL)
		return (NULL);

	c = 0;

	while (b < d)
	{
		if (b <= a)
			ptr[b] = s1[b];
		if (b >= a)
		{
			ptr[b] = s2[c];
			c++;
		}
		b++;
	}
	ptr[b] = '\0';
	return (ptr);
}
