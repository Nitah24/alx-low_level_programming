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

for (l = 'a'; l <= 'z'; l++)
{
if (l != 'e' && l != 'q')
putchar(l);
}
putchar('\n');

return (0);
}
