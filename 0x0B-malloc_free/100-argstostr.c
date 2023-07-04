#include "main.h"
#include <stdlib.h>

/**
 * argstostr - function to concatenate arguments
 * @ac: argument count
 * @av: array of arguments
 * Return: pointer to concatenated args
 */

char *argstostr(int ac, char **av)
{
	int ch = 0, a = 0, b = 0, c = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);

	while  (a < ac)
	{
		while (av[a][b])
		{
			ch++;
			b++;
		}
		b = 0;
		a++;
	}
	ptr  = malloc((sizeof(char) * ch) + ac + 1);

	a = 0;
	while (av[a])
	{
		while (av[a][b])
		{
			ptr[c] = av[a][b];
			c++;
			b++;
		}
		ptr[c] = '\n';
		b = 0;
		c++;
		a++;
	}
	c++;
	ptr[c] = '\0';
	return (ptr);
}
