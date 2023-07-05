#include "lists.h"
#include <stdlib.h>

/**
 * listint_len - returns number of elements
 * @h: list to be counted
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t numero = 0;

	while (h)
	{
		numero++;
		h = h->next;
	}
	return (numero);
}
