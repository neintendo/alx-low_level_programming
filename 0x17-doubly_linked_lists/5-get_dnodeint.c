#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: the first node.
 * @index: index of the node.
 *
 * Return: the node at @index.
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int a;

	for (a = 0; a < index && temp->next != NULL; a++)
		temp = temp->next;

	if (a != index)
		return (NULL);

	return (temp);
}
