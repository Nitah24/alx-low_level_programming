#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry level
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("Last digit of %d ", n);
	printf("is ");
	x = n % 10;
	printf("%d ", x);
	if (x > 5)
	{
		printf("and is greater than 5\n");
	}
	if (x == 0)
	{
		printf("and is 0\n");
	}
	if (x < 6 && x != 0)
	{
		printf("and is less than 6 and not 0\n");
	}
	return (0);
}
