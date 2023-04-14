#include <stdio.h>

/**
 * jump_list - searches for a value in a sorted list of integers
 * using the Jump search algorithm
 * @list: pointer to the head of the list to search in
 * @size: number of nodes in @list
 * @value: value being searched for
 *
 * Return: pointer to the first node where @value is located;
 * OR NULL if @list is empty or @value not in @list
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
    size_t jump_step = sqrt(size);
    listint_t *prev = NULL, *current = list;
    size_t i, j;

    if (list == NULL || size == 0)
        return (NULL);

    for (i = 0; current && current->n < value; i += jump_step)
    {
        prev = current;
        for (j = 0; current->next && j < jump_step; j++)
            current = current->next;
        printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
    }

    printf("Value found between indexes [%lu] and [%lu]\n", prev->index, current->index);

    for (; prev && prev->n < value; prev = prev->next)
        printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);

    if (prev && prev->n == value)
        return (prev);
    return (NULL);
}
