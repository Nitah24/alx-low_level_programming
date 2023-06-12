#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry
 * @argc: count of arguments
 * @argv: array of strings
 * Return: 0 success or 1 error
 */

int main(int argc, char *argv[])
{
	int times;

	if (argc == 3)
	{
		while (argc--)
		{
		times = atoi(argv[1]) *  atoi(argv[2]);
		}
		printf("%d\n", times);
	}
	else
	{
	printf("Error\n");
	return (1);
	}
	return (0);
}
