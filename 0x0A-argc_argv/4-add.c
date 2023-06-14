#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry
 * @argc: count of arguments
 * @argv: array of strings
 * Return: 0 success or  1 Error
 */

int main(int argc, char *argv[])
{
	int i, sum =  0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else if (argc > 1)
	{
	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) >= '0' && atoi(argv[argc - 1]) <= '9')
		{
			sum += atoi(argv[i]);
			printf("%d\n", sum);
		}
		else
		{
			printf("Error\n");

			return (1);
		}
	}
	}
	return (0);
}
