#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its opcodes
 * @argc: argument count
 * @argv: argumentss
 * Return: 0 succcess
 */

int main(int argc, char *argv[])
{
	int i, bites;
	int (*add)(int, char **) = main;
	unsigned char opcodes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bites = atoi(argv[1]);

	if (bites < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < bites; i++)
	{
		opcodes = *(unsigned char *)add;
		printf("%.2x", opcodes);

		if (i == bites - 1)
			continue;
		printf(" ");

		add++;
	}
	printf("\n");

	return (0);
}
