#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds node at the beginning of list
 * @head: list
 * @n: dat for new node
 * Return: new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));

	if (!node)
		return (NULL);

	node->n = n;
	node->next = *head;
	*head = node;

	return (node);
}
