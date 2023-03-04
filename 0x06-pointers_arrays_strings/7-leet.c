#include "main.h"

/**
 * leet-encodes a string into 1337
 * @str: string to be encoded
 * Return: encoded string
 */

char *leet(char *str)
{
	int i, index;

	char lowCase[6]  = {'a', 'e', 'o', 't', 'l'};
	char upCase[6] = {'A', 'E', 'O', 'T', 'L'};
	char num[6] = {'4', '3', '0', '7', '1'};

for (index = 0; str[index]; index++)
{
for (i = 0; i < 6; i++)
{
if (str[index] == lowCase[i] || str[index] == upCase[i])
{
	str[index] = num[i];
}
}
}
return (str);
}
