#include <stdio.h>
#include "hash_tables.h"

/**
 * key_index - functions finds the index of key
 * @key: key to find index
 * @size: size of hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;
	unsigned long int key_;

	key_ = hash_djb2(key);
	index = key_ % size;

	return (index);
}
