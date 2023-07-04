#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * free_list - to free lists
 * @head: list to free
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
