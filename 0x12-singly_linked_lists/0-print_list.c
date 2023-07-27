#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list.
 * @h: points to first node of list_t;
 *
 * Return: returns number of elements.
 */
size_t print_list(const list_t *h)
{
	int elem = 0;
	unsigned int len;
	const struct list_s *temp = h;

	if (temp == NULL)
		return (0);

	while (temp != NULL)
	{
		len = temp->len;

		if (temp->str != NULL)
		{
			printf("[%d] %s", len, temp->str);
			if (temp->next != NULL)
				printf("\n");
		}
		else
			printf("[0] (nil)\n");

		temp = temp->next;
		elem++;
	}
	printf("\n");
	return (elem);
}
