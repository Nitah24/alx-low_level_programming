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
int a;

for (a = 'z'; a >= 'a'; a--)
{
putchar(a);
}

putchar('\n');

return (0);
}
