#include "lists.h"
#include <stdlib.h>

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: the first node.
 *
 * Return: number of nodes.
*/
size_t listint_len(const listint_t *h)
{
	listint_t *temp;
	unsigned int nodes = 0;

	while (h != NULL)
	{
		temp = h->next;
		nodes++;
		h = temp;
	}
	return (nodes);
}
