#include "lists.h"

/*
 * free_dlistint - Frees list
 * @head: Pointer to first node of linked list
 */

void free_dlistint(dlistint_t *head)
{
	while (*head)
	{
		free(*head);
		*head = (*head)->next;
	}
}
