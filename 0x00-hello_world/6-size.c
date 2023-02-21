#include <stdio.h>

/**
 * main - Entry level
 *
 * Return: Always 0 (success)
 */
int main(void)
{

char type_char;
int type_int;
long int type_longint;
long long int type_lnglongint;
float type_float;

printf("Size of a char: %zu byte(s)\n", sizeof(type_char));
printf("Size of an int: %zu byte(s)\n", sizeof(type_int));
printf("Size of a long int: %zu byte(s)\n", sizeof(type_longint));
printf("Size of a long long int: %zu byte(s)\n", sizeof(type_lnglongint));
printf("Size of a float: %zu byte(s)\n", sizeof(type_float));

return (0);
}
