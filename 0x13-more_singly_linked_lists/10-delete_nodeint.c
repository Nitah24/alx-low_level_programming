#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - delete node at a given index
 * @head: head of node
 * @index: postion
 * Return: 1 if successful or -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *c = NULL;
	listint_t *tp = *head;
	unsigned int j = 0;

	if (*head == NULL)
	return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tp);
		return(1);
	}
	while (j < index - 1)
	{
		if (!tp || !(tp->next))
			return (-1);
		tp = tp->next;
		j++;
	}
	c = tp->next;
	tp->next = c->next;
	free(c);

	return (1);
}
