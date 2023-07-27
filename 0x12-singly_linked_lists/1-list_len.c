#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * list_len - returns number of elements in list_t.
 * @h: points to first node of list_t;
 *
 * Return: returns number of elements.
 */
size_t list_len(const list_t *h)
{
	int elem = 0;
	const struct list_s *temp = h;

	if (temp == NULL)
		return (0);

	while (temp != NULL)
	{
		temp = temp->next;
		elem++;
	}
	return (elem);
}
