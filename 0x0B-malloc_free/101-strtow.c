#include "main.h"
#include <stdlib.h>

int wlength(char *str);
int wcount(char *str);
char **strtow(char *str);

/**
 * wlength - gets index of the end of 1st word in a string
 * @str: string to be checked
 *
 * Return: the index
 */

int wlength(char *str)
{
	int i = 0, length = 0;

	while (*(str + i) && *(str + i) != ' ')
	{
		length++;
		i++;
	}
	return (length);
}

/**
 * wcount - gets number of words in a string
 * @str: string to search
 * Return: number of words in a string
 */

int wcount(char *str)
{
	int index = 0, length = 0, count = 0;

	for (index = 0; *(str + index); index++)
		length++;

	for (index = 0; index < length; index++)
	{
		if (*(str + index) != ' ')
		{
			count++;
			index += wlength(str + length);
		}
	}
	return (count);
}

/**
 * strtow - splits string into words
 * @str: string to be split
 * Return: NUll if str = NULL, "" or functions fails
 * Otherwise pointer to an array of words
 */

char **strtow(char *str)
{
	char **strptr;
	int index = 0, counts, c, a, alphas;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	counts = wcount(str);
	if (counts == 0)
		return (NULL);

	strptr = malloc(sizeof(char *) * (counts + 1));
	if (strptr == NULL)
		return (NULL);

	for (c = 0; c < counts; c++)
	{
		while (str[index] == ' ')
			index++;

		alphas = wlength(str + index);

		strptr[c] = malloc(sizeof(char) * (alphas + 1));

		if (strptr[c] == NULL)
		{
			for (; c >= 0; c--)
				free(strptr[c]);

			free(strptr);
			return (NULL);
		}
		for (a = 0; a < alphas; a++)
			strptr[c][a] = str[index++];

		strptr[c][a] = '\0';
	}
	strptr[c] = NULL;

	return (strptr);
}
