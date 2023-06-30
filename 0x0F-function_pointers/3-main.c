#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry
 * @argc: argument count
 * @argv: array of argumets
 *
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	int (*operator)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	operator = get_op_func(argv[2]);
	if (!operator)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", operator(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
