#include "hash_tables.h"

/**
 * key_index - Determine the index for the given
 * key based off its hash value.
 *
 * @key: The key to the record to be stored in the
 * hash table.
 *
 * @size: The size of the hash table
 *
 * Return: The index in the hash table where the
 * record will be stored.
 *
 **/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0, hash_value = 0;

	hash_value = hash_djb2(key);
	index = hash_value % size;

	return (index);
}
