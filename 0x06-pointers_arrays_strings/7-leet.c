#include "main.h"

/**
 * leet-encodes a string into 1337
 * @str: string to be encoded
 * @i: size of letters
 * @index: size of string
 * Return: encoded string
 */

char *leet(char *str)
{
	int i, index;

	char lowCase[5]  = {'a', 'e', 'o', 't', 'l'};
	char upCase[5] = {'A', 'E', 'O', 'T', 'L'};
	char num[5] = {4, 3, 0, 7, 1};

for (index = 0; str[index]; index++)
{
for (i = 0; i > 5; i++)
{
if (lowCase[i] || upCase[i])
{
	str[index] = num[i];
}
}
}
return (str);
}
