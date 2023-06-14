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
	printf("%d\n", (argc - 1));
	return (0);
}
