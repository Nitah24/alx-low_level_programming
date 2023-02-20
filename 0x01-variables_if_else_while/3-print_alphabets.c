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
int l;
int u;

for (l = 'a'; l <= 'z'; l++)
{
putchar(l);
}
for (u = 'A'; u <= 'Z'; u++)
{
	putchar(u);
}
putchar('\n');

return (0);
}
