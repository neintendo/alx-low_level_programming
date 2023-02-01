#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a list_t list.
 * @head: a pointer to the first node.
 */
void free_listint2(listint_t **head)
{
	if (head == NULL)
		return;
	if (head != NULL)
	{
		struct listint_s *newnode = *head;
		listint_t *temp;

		while (newnode)
		{
			temp = newnode->next;
			free(newnode);
			newnode = temp;
		}

		*head = NULL;
	}
}
