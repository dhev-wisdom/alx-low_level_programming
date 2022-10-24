#include "lists.h"

/**
 * print_listint - prints all elements of linked list
 * @h: pointer to the list to be printed
 *
 * Return: number of nodes contained in linked list
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *tp;
	unsigned int ctrl = 0;

	tp = h;
	while (tp)
	{
		printf("%d\n", tp->n);
		ctrl++;
		tp = tp->next;
	}

	return (ctrl);
}
