#include "lists.h"

/**
 * *add_nodeint - adds a new node at the beginning of linked list
 * @head: address of the first node of the list
 * @n: integerto insert into the new node.
 *
 * Return: address of the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *pt;

	pt = malloc(sizeof(listint_t));
	if (pt == NULL)
		return (NULL);

	pt->n = n;
	pt->next = *head;
	*head = pt;
	
	return (*head);
}
