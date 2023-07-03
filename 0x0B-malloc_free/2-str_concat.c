#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates 2 strings
 * @s1: first string
 * @s2: second string
 * Return: pointr to concatenated strings
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int a = 0, b = 0, c = 0, d = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[a])
		a++;
	while (s2[b])
		b++;

	d = a + b;
	ptr = malloc((sizeof(char) * d) + 1);

	if (ptr == NULL)
		return (NULL);

	b = 0;

	while (c < d)
	{
		if (c <= a)
			ptr[c] = s1[c];
		if (c >= a)
		{
			ptr[c] = s2[b];
			b++;
		}
		c++;
	}
	ptr[c] = '\0';
	return (ptr);
}
