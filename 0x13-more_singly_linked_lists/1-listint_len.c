#include "lists.h"

/**
 * listint_len - check the number of elements in a linked list
 * @h: pointer to the list to be checked
 *
 * Return: Number of elements in linked list.
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *pt;
	int count;

	pt = h;
	while (pt)
	{
		count++;
		pt = pt->next;
	}

	return (count);
}
