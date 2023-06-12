#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: count of arguments
 * @argv: array of ponters to arguments
 * Return: always 0 success
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	argc = i;
	printf("%d\n", argc);
	}
	return (0);
}
