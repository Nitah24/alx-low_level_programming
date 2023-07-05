#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_listint - print lists
 * @h: ist to be printed
 * Return: number of elements
 */

size_t print_listint(const listint_t *h)
{
	size_t numero = 0;

	while (h)
	{
		printf("%d\n", h->n);
			numero++;
		h = h->next;
	}
	return (numero);
}
