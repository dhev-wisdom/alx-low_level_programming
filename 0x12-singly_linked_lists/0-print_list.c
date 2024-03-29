#include "lists.h"

/**
 * print_list - Prints all the the elements of the list_t list
 * @h: The list_t list.
 *
 * Return: The number of nodes in h
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;

		nodes++;
	}

	return (nodes);
}
