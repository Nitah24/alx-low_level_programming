#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - free a list
 * @head: list to be freed
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *tp;

	while (head)
	{
		tp = head->next;
		free(head);
		head = tp;
	}
}
