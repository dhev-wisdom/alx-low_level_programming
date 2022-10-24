#include "lists.h"

/**
 * get_nodeint_at_index - return nth node of linked list
 * @head: pointer to linked list
 * @index: nth node to return
 *
 * Return: Nth node of linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int y;

	if (head == NULL)
		return (NULL);

	for (y = 0; y < index; y++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}

	return (head);
}
