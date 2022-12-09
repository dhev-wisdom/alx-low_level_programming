#include "lists.h"

size_t print_dlistint(const dlistint_t *h)
{
	size_t num  = 0;
	dlistint_t *temp;
	temp = malloc(sizeof(dlistint_t));
	temp = h;

	if (temp->next != NULL)
	{
		num++;
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	printf("%d\n", temp->n);
	num++;

	return (num);
}
