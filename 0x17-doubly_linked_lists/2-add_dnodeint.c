#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: pointer to the first node.
 * @n: the integer value stored in the current node.
 *
 * Return: returns address of the new element or NULL on error.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;

	if ((*head) != NULL)
		(*head)->prev = new_node;

	new_node->prev = NULL;
	*head = new_node;

	return (new_node);
}
