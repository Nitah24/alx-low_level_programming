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
int x;

for (x = '0'; x <= '9'; x++)
{
putchar(x);

if (x < '9')
{
putchar(',');
putchar(' ');
}

}

putchar('\n');

return (0);
}
