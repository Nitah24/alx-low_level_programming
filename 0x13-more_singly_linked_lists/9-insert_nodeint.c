#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts node at a given position
 * @head: head of lis
 * @idx: the position
 * @n: the data
 * Return: address of new node or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tp = *head;
	listint_t *node;
	unsigned int j;

	node = malloc(sizeof(listint_t));

	if (!node || !head)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}

	for (j = 0; tp && j < idx; j++)
	{
		if (j == idx - 1)
		{
			node->next = tp->next;
			tp->next = node;
			return (node);
		}
		else
			tp = tp->next;
	}
	return (NULL);
}
