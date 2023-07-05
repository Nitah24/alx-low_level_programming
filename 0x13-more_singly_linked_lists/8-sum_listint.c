#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - returns sum of all the dat of a linked list
 * @head: list or data?
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int result = 0;
	listint_t *tp = head;

	while (tp)
	{
		result += tp->n;
		tp = tp->next;
	}
	return (result);
}
