#include "lists.h"
#include <stddef.h>

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: points to the first node of dlistint_t.
 *
 * Return: the number of elements.
*/
size_t dlistint_len(const dlistint_t *h)
{
	int elements = 0;

	const struct dlistint_s *temp = h;

	if (temp == NULL)
		return (0);

	while (temp != NULL)
	{
		elements++;
		temp = temp->next;
	}
	return (elements);
}
