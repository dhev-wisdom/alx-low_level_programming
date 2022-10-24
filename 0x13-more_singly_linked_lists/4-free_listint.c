#include "lists.h"

/**
 * free_listint - frees linked list
 * @head: pointer to linked list to be free
 */

void free_listint(listint_t *head)
{
	listint_t *tp;

	tp = head;
	while (tp->next)
	{
		free(tp);
		tp = tp->next;
	}
}
