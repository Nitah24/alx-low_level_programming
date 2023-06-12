#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry
 * @argc: count of arguments
 * @argv: array of strings
 * Return: alwyas 0 success
 */

int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
