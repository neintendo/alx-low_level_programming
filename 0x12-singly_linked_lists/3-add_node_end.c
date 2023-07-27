#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: the first node.
 * @str: the string stored in the current node.
 *
 * Return: 0 on success.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int len = 0;
	char *clone;
	list_t *new_node, *last_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	clone = strdup(str);
	if (clone == NULL)
	{
		free(clone);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new_node->str = clone;
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;

	else
	{
		last_node = *head;
		while (last_node->next != NULL)
			last_node = last_node->next;
		last_node->next = new_node;
	}

	return (*head);
}
