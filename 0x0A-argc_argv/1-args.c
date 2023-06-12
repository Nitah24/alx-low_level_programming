#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry level
 * @argc: count of arguments
 * @argv: array of poiters
 * Return: always 0 success
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	int i;

	if  (argc >= 1)
	{
		for (i = 0; i < argc; i++)
		{
			argc = i;
			printf("%d\n", argc);
		}
	}
	return (0);
}
