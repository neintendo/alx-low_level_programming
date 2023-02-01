#include "lists.h"
#include <stdio.h>

/**
 * sum_listint - returns the sum of all the data of a listint_t linked list.
 * @head: the first node.
 *
 * Return: returns the sum value of all the data.
*/
int sum_listint(listint_t *head)
{
	int *sum_arr, i, sum, count = 0;
	listint_t *temp;

	sum_arr = malloc(sizeof(listint_t) * 38);
	if (sum_arr == NULL)
		return (0);

	while (head)
	{
		temp = head->next;
		sum_arr[count] = head->n;
		head = temp;
		count++;
	}

	for (i = 0, sum = 0; i < count; i++)
		sum = sum + sum_arr[i];

	return (sum);
}
