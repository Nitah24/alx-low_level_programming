#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name -  function to print a name
 * @name: the name to be printed
 * @f: pointer to fuction
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	char *nombre = name;

	if (nombre != NULL && f != NULL)
	{
	(f)(nombre);
	}
}
