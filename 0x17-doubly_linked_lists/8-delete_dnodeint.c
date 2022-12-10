#include "lists.h"

/*
 * delete_dnodeint_at_index - Delete node from list at index @index.
 * @head: Pointer to head of list.
 * @index: Index of list to delete node
 *
 * Return: 1 on success, -1 on failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head, *temp_prev;

	if (!(*head) || !(head))
		return (-1);

	if (index == 0)
	{
		head = head->next;
		head->prev = NULL;
		free(temp);

		return (1);
	}

	while (index)
	{
		temp = temp->next;
		index--;
	}

	temp_prev = temp->prev;
	temp_prev->next = temp->next;
	temp->next->prev = temp_prev;
	free(temp);

	return (1);
}
