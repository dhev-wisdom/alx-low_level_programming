#include "lists.h"

/*
 * sum_dlistint - Sum all n of list
 * @head: Pointer to beginning of linked list
 *
 * Return: Sum of all data(n) of list.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!(head))
		return (NULL);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
