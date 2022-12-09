#include "lists.h"

/**
 * print_dlistint - print all nodes in linked list.
 * h - head of linked list
 *
 * Return: Number of nodes in linked list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t num = 0;

	if (h == NULL)
	{
		printf("List is empty\n");
		return (num);
	}

	while (h)
	{
		num++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (num);
}
