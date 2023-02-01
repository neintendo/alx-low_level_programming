#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: pointer to the fist node.
 *
 * Return: returns the head node’s data.
 */
int pop_listint(listint_t **head)
{
	int ret;

	if (head == NULL)
		return (0);
	if (head != NULL)
	{
		struct listint_s *temp = *head;

		if (temp->next == NULL)
		{
			ret = temp->n;
			head = NULL;
			free(temp);
		}
		else
		{
			ret = temp->n;
			*head = temp->next;
			free(temp);
		}
	}
	return (ret);
}
