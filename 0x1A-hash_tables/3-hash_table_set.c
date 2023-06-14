#include "hash_tables.h"

/**
 * hash_table_set - Entry point
 * @ht: hash table
 * @key: key
 * @value: value
 *
 * Return: 1 on Success; 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = key_index(key, table->size);
	hash_node_t *item = create_item(key, value);

	if (ht->array[index] == NULL)
		ht->array[index] = item;
	else
	{
		hash_node_t *current = ht->array[index];

		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = item;
	}
}
