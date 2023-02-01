#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - prints all elements of a listint_t list.
 * @h: the first node.
 *
 * Return: returns number of nodes.
*/
size_t print_listint(const listint_t *h)
{
	listint_t *temp;
	int nodes = 0;

	while (h != NULL)
	{
		temp = h->next;
		printf("%d\n", h->n);
		nodes++;
		h = temp;
	}
	return (nodes);
}
