#include "lists.h"

/**
 * sum_listint - sum all the data (n) in linked list
 * @head: pointer to the linked list
 *
 * Return: Sum of all data.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		sum += (head->n);
		head = head->next;
	}

	return (sum);
}
