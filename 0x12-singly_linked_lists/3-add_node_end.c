#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end -  add new node at the end of a list
 * @head: head of list
 * @str: string in list
 * Return: address of new element or NULL of failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;
	list_t *tmp = *head;
	unsigned int length = 0;

	while (str[length])
		length++;

	node = malloc(sizeof(list_t));

	if (!node)
		return (NULL);

	node->str = strdup(str);
	node->len = length;
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
