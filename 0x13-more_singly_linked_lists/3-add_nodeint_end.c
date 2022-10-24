#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of linked list
 * @head: address of first node of linked list
 * @n: integer to insert in the new node
 *
 * Return: Address of the new node
 * or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *temp2;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}

	temp2 = *head;
	while (temp->next)
	{
		temp2 = temp->next;
	}

	temp2->next = temp;
	return (temp);
}
