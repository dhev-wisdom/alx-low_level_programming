#include "lists.h"

/*
 * get_dnodeint_at_index - finds amd returns nth node of linked list
 * @head: pointer to head of list
 * @index: index of node to return
 *
 * Return: nth node of list
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	int i = 0;
	int num = 0;
	dlistint_t *temp = head;

	while (temp)
	{
		temp = temp->next;
		num++;
	}

	if (index < 0 | index > num | head == NULL)
		return (NULL);

	while (i < index)
	{
		head = head->next;
		i++;
	}

	return (head);
}
