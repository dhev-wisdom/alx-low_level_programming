#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at a given position
 * @head: pointer to linked list
 * @idx: index of the list where the new node should be added
 * @n: 
 *
 * Return: address of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp;
	unsigned int count;

	if (*head == NULL && idx != 0)
		return (NULL);

	if (idx != 0)
	{
		temp = *head;
		for (count = 0; count < idx - 1 && temp != NULL; count++)
		{
			temp = temp->next;
		}
		if (temp == NULL)
			return (NULL);
	}

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}
