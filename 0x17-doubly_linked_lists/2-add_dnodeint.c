#include "lists.h"

/*
 * dlistint_t *add _dnodei t - Adds node at the beginning of list.
 * @head - pointer to head of list.
 * @n - data to add to new node
 *
 * Return: Address to newly added node or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;
	new_node = malloc(sizeof(dlistint_t));
	new_node->n = n;

	if (*head == NULL)
	{
		*head = new_node;
		new_node->prev = NULL;
		return (new_node)
	}
	else
	{
		*head = *head->next;
		*head->prev = new_node;
		new_node->prev = NULL;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
}
