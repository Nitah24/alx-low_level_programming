#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * list_len - returns number of elements in a linked list
 * @h: pointer to list
 * Return: number of elements
 */

size_t list_len(const list_t *h);
{
	size_t c = 0;

	while (h)
	{
		c++;
		h = h->next;
	}
	return (c);
}
