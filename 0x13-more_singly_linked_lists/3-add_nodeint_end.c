#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds node at the end of lists
 * @head: list
 * @n: elements
 * Return: pointer o new lement
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *tmp = *head;

	node = malloc(sizeof(listint_t));

	if (!node)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = node;

	return (node);
}
