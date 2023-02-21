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
int h;

for (a = '0'; a <= '9'; a++)
{
putchar(a);
}
for (h = 'a'; h <= 'f'; h++)
{
putchar(h);
}

putchar('\n');

return (0);
}
