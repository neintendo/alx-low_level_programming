#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: the first node.
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
