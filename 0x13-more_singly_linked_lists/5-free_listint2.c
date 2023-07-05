#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees list and sets head to NULL
 * @head: list
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *tp;

	if (head == NULL)
		return;

	while (*head)
	{
		tp = (*head)->next;
		free(*head);
		*head = tp;
	}
	*head = NULL;
}
