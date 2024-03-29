#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
 * get_op_func - array of function pointers
 * @s: the operatorpassed as argument
 *
 * Return: apointer to a function corresponding to operator
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i;

	while (i < 5)
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);
		i++;
	}
	return (0);
}
