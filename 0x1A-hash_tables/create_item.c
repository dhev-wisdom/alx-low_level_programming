#include "hash_tables.h"

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
