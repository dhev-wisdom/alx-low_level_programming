#include "lists.h"

/**
 * free_list - frees a linked link.
 * @head: list_t list to be freed.
 */

void free_list(list_t list *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
