#include "lists.h"

/**
 * pop_listint - deletes the head node of linked list
 * @head: pointer to linkd list
 *
 * Return: head node's data (n).
 */

int pop_listint(listint_t **head)
{
	listint_t *tp;
	int my_data;

	if (*head == NULL)
		return (0);

	tp = *head;
	*head = tp->next;
	my_data = tp->n;
	free(tp);
	tp = NULL;
	return (my_data);
}
