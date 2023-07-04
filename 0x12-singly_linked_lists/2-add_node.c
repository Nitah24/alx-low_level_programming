#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - add a node to at the beginning of a list
 * @head: first node
 * @str: string list
 * Return: address of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	unsigned int length = 0;

	while (str[length])
		length++;

	node = malloc(sizeof(list_t));
	if (!node)
		return (NULL);

	node->str = strdup(str);
	node->len = length;
	node->next = (*head);
	(*head) = node;

	return (*head);
}
