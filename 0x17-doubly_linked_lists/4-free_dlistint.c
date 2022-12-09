#include "lists.h"

/*
 * free_dlistint - Frees list
 * @head: Pointer to first node of linked list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	while (temp != NULL)
	{
		free(temp);
		temp = temp->next;
	}
}
