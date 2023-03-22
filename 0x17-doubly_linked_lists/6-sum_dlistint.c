#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * sum_dlistint - finds the sum of all the data (n) of dlistint_t.
 * @head: the first node.
 *
 * Return: returns the sum of all the data in dlistint_t.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	unsigned int a;

	if (head != NULL)
	{
		temp = head;
		a = head->n;
	}
	else
		return (0);

	while (temp->next != NULL)
	{
		temp = temp->next;
		a += temp->n;
	}

	return (a);
}
