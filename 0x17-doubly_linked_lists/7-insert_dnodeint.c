#include "lists.h"

/*
 * insert_dnodeint_at_index - Insert node at a given index
 * @h: Pointer to list head
 * @idx; index to insert node
 * @n: node data
 *
 * Return: Address of the new node or NULL if it failed.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	while (idx - 1)
	{
		idx--;
		*h = (*h)->next;
	}
	(*h)->next = new_node;
	new_node->prev = (*h);
	new_node->next = (*h)->next->next;

	return (new_node);
}
