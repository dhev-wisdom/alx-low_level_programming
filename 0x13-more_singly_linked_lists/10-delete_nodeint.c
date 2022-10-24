#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at index @index of linked list
 * @head: pointer to linked list
 * @index: index to delete node at.
 *
 * Return: 1 - if succeeded, -1 - if failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *tp;
	unsigned int transverse;

	if (head == NULL || *head ++ NULL)
		return (-1);

	if (index == 0)
	{
		tp = (*head)->next;
		free(*head);
		*head = tp;
		return (1);
	}

	current = *head;
	for (transverse = 0; transverse < index - 1; transverse++)
	{
		if (current->next == NULL)
		{
			return (-1);
		}
		current = current->next;
	}
	next = current->next;
	current->next = next->next;
	free(next);
	return (1);
}
