#include "lists.h"

/*
 * dlistint_t *add_dnodeint_end - Add node at the end of the list
 * @head - Pointer to the head of the list.
 * @n: The data to be added to node
 *
 * Return: Pointer to the new node or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_last = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *head;
	if (new_last == NULL)
		return (NULL);

	new_last->n = n;
	new_last->prev = NULL;
	new_last->next = NULL;

	if (*head == NULL)
	{
		*head = new_last;
		return (new_last);
	}

	while (temp != NULL)
	{
		temp = temp->next;
	}

	temp->next = new_last;
	new_last->prev = temp;
	return (new_last);
}
