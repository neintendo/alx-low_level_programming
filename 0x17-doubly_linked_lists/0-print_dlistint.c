#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: points to the first node of dlistint_t.
 *
 * Return: the number of elements.
*/
size_t print_dlistint(const dlistint_t *h)
{
	int elements = 0;

	const struct dlistint_s *temp = h;

	if (temp == NULL)
		return (0);

	while (temp != NULL)
	{
		printf("%d\n", temp->n);

		temp = temp->next;
		elements++;
	}
	return (elements);
}
