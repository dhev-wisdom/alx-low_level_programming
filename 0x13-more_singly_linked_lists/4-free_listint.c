#include "lists.h"

/**
 * free_listint - frees linked list
 * @head: pointer to linked list to be free
 */

void free_listint(listint_t *head)
{
	listint_t *tp, *tp2;

	tp = head;
	while (tp != NULL)
	{
		tp2 = tp->next;
		free(tp);
		tp = tp2;
	}
	head = NULL;
}
