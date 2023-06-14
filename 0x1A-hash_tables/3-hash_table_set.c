#include "hash_tables.h"


hash_node_t *create_item(char *key, char *value);


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
	{
		ht->array[index] = item;

		return (1);
	}
	else
	{
		hash_node_t *current = ht->array[index];

		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = item;

		return (1);
	}

	return (0);
}

/**
 * create_item - creates hash item
 * @key: key
 * @value: value
 *
 * Return: hash node created
 */
hash_node_t *create_item(char *key, char *value)
{
	hash_node_t *item = (hash_node_t *) malloc(sizeof(hash_node_t));

	item->key = (char *) malloc(strlen(key) + 1);
	item->value = (char *) malloc(strlen(value) + 1);
	item->next = NULL;

	strcpy(item->key, key);
	strcpy(item->value, value);

	return (item);
}
