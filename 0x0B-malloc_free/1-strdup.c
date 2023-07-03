#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function to return a pointer to a newly allocated space in memory
 * @str: the string allocated memory for
 * Return: pointer to duplicated string
 */

char *_strdup(char *str)
{
	char *ptr;
	int a = 0, c = 1;

	if (str == NULL)
		return (NULL);

	while (str[c])
	{
		c++;
	}

	ptr = malloc((sizeof(char) * c) + 1);

	if (ptr == NULL)
		return (NULL);

	while (a < c)
	{
		ptr[a] = str[a];
		a++;
	}

	ptr[a] = '\0';
	return (ptr);
}
