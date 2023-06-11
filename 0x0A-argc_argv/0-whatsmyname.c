#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: count of the arguments supplies to the program
 * @argv: an array of pointers to arguments
 * Return: always 0 success
 */

int main(int argc, char *argv[])
{
	while (argc--)
	{
	printf("%s\n", argv[0]);
	}
	return (0);
}
