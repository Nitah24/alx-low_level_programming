#include "main.h"

/**
 * _puts- prints a string, a new line, to stdout
 * @str: string to be printed
 * Return: nothing
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
