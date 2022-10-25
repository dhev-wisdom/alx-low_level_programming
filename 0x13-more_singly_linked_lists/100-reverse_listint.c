#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the linked list to reverse.
 *
 * Return: a pointer to the first node of the reversed linked list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev;
	listint_t *nxt;

	prev = NULL;
	nxt = NULL;

	while (*head)
	{
		nxt = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = nxt;
	}

	*head = prev;

	return (*head);
}
