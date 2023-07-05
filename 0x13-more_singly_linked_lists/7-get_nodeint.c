#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head: list
 * @index: index of node
 * Return: nth node or NULL if doesnt't exists
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;
	listint_t *tp = head;

	while (tp && n < index)
	{
		tp = tp->next;
		n++;
	}
	return (tp ? tp : NULL);
}
