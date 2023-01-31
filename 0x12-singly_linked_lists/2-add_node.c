#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * add_node -  adds a new node at the beginning.
 * @head: the first node.
 * @str: the string stored in the current node.
 *
 * Return: returns address of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	int len = 0;
	char *clone;
	list_t *new_node;

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
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
