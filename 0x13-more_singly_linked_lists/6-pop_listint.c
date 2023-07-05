#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes head of a node
 * returns head node data
 * @head: linked lists
 * Return: head node data
 */

int pop_listint(listint_t **head)
{
	listint_t *tp;
	int n;

	if (!head || !*head)
		return (0);

	n = (*head)->n;
	tp = (*head)->next;
	free(*head);
	*head = tp;

	return (n);
}
