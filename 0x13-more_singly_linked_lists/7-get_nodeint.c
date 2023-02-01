#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: the first node.
 * @index: the index of the node to return.
 *
 * Return: returns index of the node or NULL on error.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *temp;

	while (count < index)
	{
		temp = head->next;
		head = temp;
		count++;
	}

	if (count != index)
		return (NULL);
	return (head);
}
